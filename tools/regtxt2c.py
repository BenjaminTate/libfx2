import sys
import re
from collections import defaultdict


hidebit = r"""
.+:EP\d+$| # too ambiguous
(?!IO|ACC|B).+:([AD]|BC|PFC)\d+$| # address/data/counter regs
USBFRAME.|MICROFRAME|ERRCNTLIM|EP.AUTOINLEN.|EP.ISOINPKTS:INPPF.|GPIFTCB.| # counter reg
INT.IVEC|FNADDR|SUDPTR.|XAUTODAT.|GPIFADR.| # address reg
REVID|ECC.B.|SETUPDAT|I2DAT|UDMACRC.| # data reg
GPIFTRIG|FIFORESET| # trigger reg
GPIFIDLECS # conflicts with I2C
"""


banner   = None
banners  = {}
regnames = defaultdict(lambda: None)
regaddrs = defaultdict(lambda: None)
regdescs = defaultdict(lambda: None)
regsizes = defaultdict(lambda: None)
regbits  = defaultdict(lambda: defaultdict(set))

try:
    lines = enumerate(sys.stdin.readlines())
    while True:
        while True:
            line = next(lines)[1]
            if line[0] == '#':
                banner = line[1:-1]
                continue

            match = re.match(r"^[0-9a-f]{2,4}$", line, re.I)
            if match:
                regno = int(match[0], 16)
                if banner:
                    banners[regno] = banner
                    banner = None
                break

        regsz = int(next(lines)[1])
        if regsz > 1:
            regsizes[regno] = regsz

        match = re.match(r"^ ([A-Z0-9_]+|reserved)", next(lines)[1])
        if not match:
            raise SystemExit(f"{next(lines)[0]}: register name")
        regname = match[1]

        if regname == "reserved":
            continue

        regnames[regno] = regname
        regaddrs[regname] = regno

        match = re.match(r"^ (.+)", next(lines)[1])
        if not match:
            raise SystemExit(f"{next(lines)[0]}: description")
        regdesc = match[1]

        regdescs[regno] = regdesc

        for bit in reversed(range(8)):
            match = re.match(r"^ (?:[01x]|reserved|([A-Z0-9_/]+))", next(lines)[1])
            if not match:
                raise SystemExit(f"{next(lines)[0]}: bit name")
            if re.match(r"^[0-9]{2,}$", match[0]):
                raise SystemExit(f"{next(lines)[0]}: bit overrun")
            bitnames = match[1]
            if not bitnames:
                continue
            for bitname in bitnames.split("/"):
                if re.match(hidebit, f"{regname}:{bitname}", re.X):
                    continue
                regbits[regno][bit].add(bitname)

except StopIteration:
    pass


reg16 = defaultdict(lambda: None)
for reglow in regnames:
    match = re.match(r"^(.+)L(.*)$", regnames[reglow])
    if not match:
        continue
    reghigh = regaddrs[f"{match[1]}H{match[2]}"]
    if not reghigh:
        continue
    regwordname = match[1] + match[2]
    if reglow < 0x100: # sfr
        reg16[reglow]  = (regwordname, (reghigh << 8) | reglow)
    elif reghigh == reglow + 1:
        reg16[reglow]  = (regwordname, reglow)


bitpos  = {}
bitexcl = set()
bitsets = defaultdict(set)
for reg in regbits:
    regname = regnames[reg]
    bits    = regbits[reg]
    for bit in range(8):
        if bit not in bits:
            continue
        bitnames = bits[bit]
        for bitname in bitnames:
            if re.match(r"^[AD][0-9]+$", bitname):
                continue
            elif bitname not in bitpos:
                bitpos[bitname] = bit
            elif bitpos[bitname] == bit:
                pass
            else:
                print(f"bit conflict at {bitname}: {regnames[reg]}.{bit}, "
                      f"but .{bitpos[bitname]} seen previously",
                      file=sys.stderr)
                bitexcl.add(bitname)
                continue
            bitsets[bitname].add(regname)

bitgroups = defaultdict(set)
for bitname in bitsets:
    bitgroups[frozenset(bitsets[bitname])].add(bitname)


print("#ifndef FX2REGS_H")
print("#define FX2REGS_H")
print()
print("// DO NOT EDIT. Automatically generated by regtxt2c.py.")
print()
print("#include <stdint.h>")
print()
print("#define _SFR(addr)   static __sfr __at (addr)")
print("#define _SFR16(addr) static __sfr __at (addr)")
print("#define _SBIT(addr)  static __sbit __at (addr)")
print("#define _IOR(addr)   static __xdata __at (addr) volatile uint8_t")
print("#define _IOR16(addr) static __xdata __at (addr) volatile uint16_t")


for reg in sorted(regnames.keys()):
    regname = regnames[reg]
    regdesc = regdescs[reg]

    if reg in banners:
        print()
        print(f"// {banners[reg]}")
        print()

    if reg16[reg]:
        regnameword, regword = reg16[reg]
        regdescword = re.sub(r" L$", "", regdesc)

    if regsizes[reg]:
        regsz = regsizes[reg]
        print(f"_IOR(0x{reg:04x}) {regname}[{regsz}]; //< {regdesc}")
    elif reg < 0x100:
        print(f"_SFR(0x{reg:02x}) {regname}; //< {regdesc}")
        if reg16[reg]:
            print(f"_SFR16(0x{regword:04x}) {regnameword}; //< {regdescword}")
    else:
        print(f"_IOR(0x{reg:04x}) {regname}; //< {regdesc}")
        if reg16[reg]:
            print(f"_IOR16(0x{reg:04x}) {regnameword}; //< {regdescword}")

    if reg < 0x100 and (reg & 0x7) == 0:
        bits = regbits[reg]
        for bit in range(8):
            if bit not in bits:
                continue
            bitnames = bits[bit]
            for bitname in bitnames:
                if re.match(r"D[0-7]$", bitname):
                    if regname.startswith("IO"):
                        bitname = f"P{regname[-1]}{bit}"
                    else:
                        bitname = f"{regname}{bit}"
                print(f"    _SBIT(0x{reg:02x} + {bit}) {bitname};")
print()

for _, bitgroup in sorted([(regaddrs[next(iter(bitgroups[bitgroup]))], bitgroup)
                          for bitgroup in bitgroups]):
    print(f"// Bits from {', '.join(sorted(bitgroup))}")
    print()
    bitnames = bitgroups[bitgroup]
    for (pos, bitname) in sorted([(bitpos[bitname], bitname) for bitname in bitnames]):
        print(f"#define _{bitname:10}  (1<<{pos})")
    print()

print("#endif")
