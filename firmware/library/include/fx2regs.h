#ifndef FX2REGS_H
#define FX2REGS_H

// DO NOT EDIT. Automatically generated by regtxt2c.py.

#include <stdint.h>

#define _SFR(addr)   static __sfr __at (addr)
#define _SFR16(addr) static __sfr __at (addr)
#define _SBIT(addr)  static __sbit __at (addr)
#define _IOR(addr)   static __xdata __at (addr) volatile uint8_t
#define _IOR16(addr) static __xdata __at (addr) volatile uint16_t

// Special Function Registers (SFRs)

_SFR(0x80) IOA; //< Port A
    _SBIT(0x80 + 0) PA0;
    _SBIT(0x80 + 1) PA1;
    _SBIT(0x80 + 2) PA2;
    _SBIT(0x80 + 3) PA3;
    _SBIT(0x80 + 4) PA4;
    _SBIT(0x80 + 5) PA5;
    _SBIT(0x80 + 6) PA6;
    _SBIT(0x80 + 7) PA7;
_SFR(0x81) SP; //< Stack Pointer
_SFR(0x82) DPL0; //< Data Pointer 0 L
_SFR16(0x8382) DP0; //< Data Pointer 0
_SFR(0x83) DPH0; //< Data Pointer 0 H
_SFR(0x84) DPL1; //< Data Pointer 1 L
_SFR16(0x8584) DP1; //< Data Pointer 1
_SFR(0x85) DPH1; //< Data Pointer 1 H
_SFR(0x86) DPS; //< Data Pointer 0/1 select
_SFR(0x87) PCON; //< Power Control
_SFR(0x88) TCON; //< Timer/Counter Control
    _SBIT(0x88 + 0) IT0;
    _SBIT(0x88 + 1) IE0;
    _SBIT(0x88 + 2) IT1;
    _SBIT(0x88 + 3) IE1;
    _SBIT(0x88 + 4) TR0;
    _SBIT(0x88 + 5) TF0;
    _SBIT(0x88 + 6) TR1;
    _SBIT(0x88 + 7) TF1;
_SFR(0x89) TMOD; //< Timer/Counter Mode Control
_SFR(0x8a) TL0; //< Timer 0 reload L
_SFR16(0x8c8a) T0; //< Timer 0 reload
_SFR(0x8b) TL1; //< Timer 1 reload L
_SFR16(0x8d8b) T1; //< Timer 1 reload
_SFR(0x8c) TH0; //< Timer 0 reload H
_SFR(0x8d) TH1; //< Timer 1 reload H
_SFR(0x8e) CKCON; //< Clock Control
_SFR(0x90) IOB; //< Port B
    _SBIT(0x90 + 0) PB0;
    _SBIT(0x90 + 1) PB1;
    _SBIT(0x90 + 2) PB2;
    _SBIT(0x90 + 3) PB3;
    _SBIT(0x90 + 4) PB4;
    _SBIT(0x90 + 5) PB5;
    _SBIT(0x90 + 6) PB6;
    _SBIT(0x90 + 7) PB7;
_SFR(0x91) EXIF; //< External Interrupt Flag(s)
_SFR(0x92) MPAGE; //< Upper Addr Byte of MOVX using @R0 / @R1
_SFR(0x98) SCON0; //< Serial Port 0 Control
    _SBIT(0x98 + 0) RI_0;
    _SBIT(0x98 + 1) TI_0;
    _SBIT(0x98 + 2) RB8_0;
    _SBIT(0x98 + 3) TB8_0;
    _SBIT(0x98 + 4) REN_0;
    _SBIT(0x98 + 5) SM2_0;
    _SBIT(0x98 + 6) SM1_0;
    _SBIT(0x98 + 7) SM0_0;
_SFR(0x99) SBUF0; //< Serial Port 0 Data Buffer
_SFR(0x9a) AUTOPTRH1; //< Autopointer 1 Address H
_SFR(0x9b) AUTOPTRL1; //< Autopointer 1 Address L
_SFR16(0x9a9b) AUTOPTR1; //< Autopointer 1 Address
_SFR(0x9d) AUTOPTRH2; //< Autopointer 2 Address H
_SFR(0x9e) AUTOPTRL2; //< Autopointer 2 Address L
_SFR16(0x9d9e) AUTOPTR2; //< Autopointer 2 Address
_SFR(0xa0) IOC; //< Port C
    _SBIT(0xa0 + 0) PC0;
    _SBIT(0xa0 + 1) PC1;
    _SBIT(0xa0 + 2) PC2;
    _SBIT(0xa0 + 3) PC3;
    _SBIT(0xa0 + 4) PC4;
    _SBIT(0xa0 + 5) PC5;
    _SBIT(0xa0 + 6) PC6;
    _SBIT(0xa0 + 7) PC7;
_SFR(0xa1) INT2CLR; //< Interrupt 2 clear
_SFR(0xa2) INT4CLR; //< Interrupt 4 clear
_SFR(0xa8) IE; //< Interrupt Enable
    _SBIT(0xa8 + 0) EX0;
    _SBIT(0xa8 + 1) ET0;
    _SBIT(0xa8 + 2) EX1;
    _SBIT(0xa8 + 3) ET1;
    _SBIT(0xa8 + 4) ES0;
    _SBIT(0xa8 + 5) ET2;
    _SBIT(0xa8 + 6) ES1;
    _SBIT(0xa8 + 7) EA;
_SFR(0xaa) EP2468STAT; //< Endpoint 2,4,6,8 status flags
_SFR(0xab) EP24FIFOFLGS; //< Endpoint 2,4 slave FIFO status flags
_SFR(0xac) EP68FIFOFLGS; //< Endpoint 6,8 slave FIFO status flags
_SFR(0xaf) AUTOPTRSETUP; //< 0
_SFR(0xb0) IOD; //< Port D
    _SBIT(0xb0 + 0) PD0;
    _SBIT(0xb0 + 1) PD1;
    _SBIT(0xb0 + 2) PD2;
    _SBIT(0xb0 + 3) PD3;
    _SBIT(0xb0 + 4) PD4;
    _SBIT(0xb0 + 5) PD5;
    _SBIT(0xb0 + 6) PD6;
    _SBIT(0xb0 + 7) PD7;
_SFR(0xb1) IOE; //< Port E
_SFR(0xb2) OEA; //< Port A Output Enable
_SFR(0xb3) OEB; //< Port B Output Enable
_SFR(0xb4) OEC; //< Port C Output Enable
_SFR(0xb5) OED; //< Port D Output Enable
_SFR(0xb6) OEE; //< Port E Output Enable
_SFR(0xb8) IP; //< Interrupt Priority
    _SBIT(0xb8 + 0) PX0;
    _SBIT(0xb8 + 1) PT0;
    _SBIT(0xb8 + 2) PX1;
    _SBIT(0xb8 + 3) PT1;
    _SBIT(0xb8 + 4) PS0;
    _SBIT(0xb8 + 5) PT2;
    _SBIT(0xb8 + 6) PS1;
_SFR(0xba) EP01STAT; //< Endpoint 0&1 Status
_SFR(0xbb) GPIFTRIG; //< Endpoint 2,4,6,8 GPIF slave FIFO Trigger
_SFR(0xbd) GPIFSGLDATH; //< GPIF Data H (16-bit mode only)
_SFR(0xbe) GPIFSGLDATLX; //< GPIF Data L w/ Trigger
_SFR(0xbf) GPIFSGLDATL; //< GPIF Data L w/ No Trigger D7
_SFR16(0xbdbf) GPIFSGLDAT; //< GPIF Data L w/ No Trigger D7
_SFR(0xc0) SCON1; //< Serial Port 1 Control
    _SBIT(0xc0 + 0) RI_1;
    _SBIT(0xc0 + 1) TI_1;
    _SBIT(0xc0 + 2) RB8_1;
    _SBIT(0xc0 + 3) TB8_1;
    _SBIT(0xc0 + 4) REN_1;
    _SBIT(0xc0 + 5) SM2_1;
    _SBIT(0xc0 + 6) SM1_1;
    _SBIT(0xc0 + 7) SM0_1;
_SFR(0xc1) SBUF1; //< Serial Port 1 Data Buffer
_SFR(0xc8) T2CON; //< Timer/Counter 2 Control
    _SBIT(0xc8 + 0) CPRL2;
    _SBIT(0xc8 + 1) CT2;
    _SBIT(0xc8 + 2) TR2;
    _SBIT(0xc8 + 3) EXEN2;
    _SBIT(0xc8 + 4) TCLK;
    _SBIT(0xc8 + 5) RCLK;
    _SBIT(0xc8 + 6) EXF2;
    _SBIT(0xc8 + 7) TF2;
_SFR(0xca) RCAP2L; //< Capture for Timer 2, auto-reload, up-counter
_SFR16(0xcbca) RCAP2; //< Capture for Timer 2, auto-reload, up-counter
_SFR(0xcb) RCAP2H; //< Capture for Timer 2, auto-reload, up-counter
_SFR(0xcc) TL2; //< Timer 2 reload L
_SFR16(0xcdcc) T2; //< Timer 2 reload
_SFR(0xcd) TH2; //< Timer 2 reload H
_SFR(0xd0) PSW; //< Program Status Word
    _SBIT(0xd0 + 0) P;
    _SBIT(0xd0 + 1) F1;
    _SBIT(0xd0 + 2) OV;
    _SBIT(0xd0 + 3) RS0;
    _SBIT(0xd0 + 4) RS1;
    _SBIT(0xd0 + 5) F0;
    _SBIT(0xd0 + 6) AC;
    _SBIT(0xd0 + 7) CY;
_SFR(0xd8) EICON; //< External Interrupt Control SMOD1
    _SBIT(0xd8 + 4) INT6;
    _SBIT(0xd8 + 5) RESI;
    _SBIT(0xd8 + 6) ERESI;
_SFR(0xe0) ACC; //< Accumulator
    _SBIT(0xe0 + 0) ACC0;
    _SBIT(0xe0 + 1) ACC1;
    _SBIT(0xe0 + 2) ACC2;
    _SBIT(0xe0 + 3) ACC3;
    _SBIT(0xe0 + 4) ACC4;
    _SBIT(0xe0 + 5) ACC5;
    _SBIT(0xe0 + 6) ACC6;
    _SBIT(0xe0 + 7) ACC7;
_SFR(0xe8) EIE; //< External Interrupt Enable(s)
    _SBIT(0xe8 + 0) EUSB;
    _SBIT(0xe8 + 1) EI2C;
    _SBIT(0xe8 + 2) EX4;
    _SBIT(0xe8 + 3) EX5;
    _SBIT(0xe8 + 4) EX6;
_SFR(0xf0) B; //< B
    _SBIT(0xf0 + 0) B0;
    _SBIT(0xf0 + 1) B1;
    _SBIT(0xf0 + 2) B2;
    _SBIT(0xf0 + 3) B3;
    _SBIT(0xf0 + 4) B4;
    _SBIT(0xf0 + 5) B5;
    _SBIT(0xf0 + 6) B6;
    _SBIT(0xf0 + 7) B7;
_SFR(0xf8) EIP; //< External Interrupt Priority 1 Control
    _SBIT(0xf8 + 1) PUSB;
    _SBIT(0xf8 + 2) PI2C;
    _SBIT(0xf8 + 3) PX4;
    _SBIT(0xf8 + 4) PX5;
    _SBIT(0xf8 + 5) PX6;

// GPIF Waveform Memories

_IOR(0xe400) WAVEDATA[128]; //< GPIF Waveform Descriptor 0, 1, 2, 3 data

// General Configuration

_IOR(0xe50d) GPCR2; //< General Purpose Configuration Register 2
_IOR(0xe600) CPUCS; //< CPU Control & Status
_IOR(0xe601) IFCONFIG; //< Interface Configuration (Ports, GPIF, slave FIFOs)
_IOR(0xe602) PINFLAGSAB; //< Slave FIFO FLAGA and FLAGB Pin Configuration
_IOR(0xe603) PINFLAGSCD; //< Slave FIFO FLAGC and FLAGD Pin Configuration
_IOR(0xe604) FIFORESET; //< Restore FIFOS to default state
_IOR(0xe605) BREAKPT; //< Breakpoint Control
_IOR(0xe606) BPADDRH; //< Breakpoint Address H
_IOR(0xe607) BPADDRL; //< Breakpoint Address L
_IOR(0xe608) UART230; //< 230 Kbaud internally generated ref. clock
_IOR(0xe609) FIFOPINPOLAR; //< Slave FIFO Interface pins polarity
_IOR(0xe60a) REVID; //< Chip Revision
_IOR(0xe60b) REVCTL; //< Chip Revision Control

// UDMA

_IOR(0xe60c) GPIFHOLDAMOUNT; //< MSTB Hold Time (for UDMA)

// Endpoint Configuration

_IOR(0xe610) EP1OUTCFG; //< Endpoint 1-OUT Configuration
_IOR(0xe611) EP1INCFG; //< Endpoint 1-IN Configuration
_IOR(0xe612) EP2CFG; //< Endpoint 2 Configuration
_IOR(0xe613) EP4CFG; //< Endpoint 4 Configuration
_IOR(0xe614) EP6CFG; //< Endpoint 6 Configuration
_IOR(0xe615) EP8CFG; //< Endpoint 8 Configuration
_IOR(0xe618) EP2FIFOCFG; //< Endpoint 2 / slave FIFO configuration
_IOR(0xe619) EP4FIFOCFG; //< Endpoint 4 / slave FIFO configuration
_IOR(0xe61a) EP6FIFOCFG; //< Endpoint 6 / slave FIFO configuration
_IOR(0xe61b) EP8FIFOCFG; //< Endpoint 8 / slave FIFO configuration
_IOR(0xe620) EP2AUTOINLENH; //< Endpoint 2 AUTOIN Packet Length H
_IOR(0xe621) EP2AUTOINLENL; //< Endpoint 2 AUTOIN Packet Length L
_IOR(0xe622) EP4AUTOINLENH; //< Endpoint 4 AUTOIN Packet Length H
_IOR(0xe623) EP4AUTOINLENL; //< Endpoint 4 AUTOIN Packet Length L
_IOR(0xe624) EP6AUTOINLENH; //< Endpoint 6 AUTOIN Packet Length H
_IOR(0xe625) EP6AUTOINLENL; //< Endpoint 6 AUTOIN Packet Length L
_IOR(0xe626) EP8AUTOINLENH; //< Endpoint 8 AUTOIN Packet Length H
_IOR(0xe627) EP8AUTOINLENL; //< Endpoint 8 AUTOIN Packet Length L
_IOR(0xe628) ECCCFG; //< ECC Configuration
_IOR(0xe629) ECCRESET; //< ECC Reset
_IOR(0xe62a) ECC1B0; //< ECC1 Byte 0 Address
_IOR(0xe62b) ECC1B1; //< ECC1 Byte 1 Address
_IOR(0xe62c) ECC1B2; //< ECC1 Byte 2 Address
_IOR(0xe62d) ECC2B0; //< ECC2 Byte 0 Address
_IOR(0xe62e) ECC2B1; //< ECC2 Byte 1 Address
_IOR(0xe62f) ECC2B2; //< ECC2 Byte 2 Address
_IOR(0xe630) EP2FIFOPFH; //< Endpoint 2 / slave FIFO Programmable Flag H
_IOR(0xe631) EP2FIFOPFL; //< Endpoint 2 / slave FIFO Programmable Flag L
_IOR(0xe632) EP4FIFOPFH; //< Endpoint 4 / slave FIFO Programmable Flag H
_IOR(0xe633) EP4FIFOPFL; //< Endpoint 4 / slave FIFO Programmable Flag L
_IOR(0xe634) EP6FIFOPFH; //< Endpoint 6 / slave FIFO Programmable Flag H
_IOR(0xe635) EP6FIFOPFL; //< Endpoint 6 / slave FIFO Programmable Flag L
_IOR(0xe636) EP8FIFOPFH; //< Endpoint 8 / slave FIFO Programmable Flag H
_IOR(0xe637) EP8FIFOPFL; //< Endpoint 8 / slave FIFO Programmable Flag L
_IOR(0xe640) EP2ISOINPKTS; //< EP2 (if ISO) IN Packets per frame (1-3)
_IOR(0xe641) EP4ISOINPKTS; //< EP4 (if ISO) IN Packets per frame (1-3)
_IOR(0xe642) EP6ISOINPKTS; //< EP6 (if ISO) IN Packets per frame (1-3)
_IOR(0xe643) EP8ISOINPKTS; //< EP8 (if ISO) IN Packets per frame (1-3)
_IOR(0xe648) INPKTEND; //< Force IN Packet End
_IOR(0xe649) OUTPKTEND; //< Force OUT Packet End

// Interrupts

_IOR(0xe650) EP2FIFOIE; //< Endpoint 2 slave FIFO Flag Interrupt Enable
_IOR(0xe651) EP2FIFOIRQ; //< Endpoint 2 slave FIFO Flag Interrupt Request
_IOR(0xe652) EP4FIFOIE; //< Endpoint 4 slave FIFO Flag Interrupt Enable
_IOR(0xe653) EP4FIFOIRQ; //< Endpoint 4 slave FIFO Flag Interrupt Request
_IOR(0xe654) EP6FIFOIE; //< Endpoint 6 slave FIFO Flag Interrupt Enable
_IOR(0xe655) EP6FIFOIRQ; //< Endpoint 6 slave FIFO Flag Interrupt Request
_IOR(0xe656) EP8FIFOIE; //< Endpoint 8 slave FIFO Flag Interrupt Enable
_IOR(0xe657) EP8FIFOIRQ; //< Endpoint 8 slave FIFO Flag Interrupt Request
_IOR(0xe658) IBNIE; //< IN-BULK-NAK Interrupt Enable
_IOR(0xe659) IBNIRQ; //< IN-BULK-NAK Interrupt Request
_IOR(0xe65a) NAKIE; //< Endpoint Ping-NAK / IBN Interrupt Enable
_IOR(0xe65b) NAKIRQ; //< Endpoint Ping-NAK / IBN Interrupt Request
_IOR(0xe65c) USBIE; //< USB Interrupt Enables
_IOR(0xe65d) USBIRQ; //< USB Interrupt Requests
_IOR(0xe65e) EPIE; //< Endpoint Interrupt Enables
_IOR(0xe65f) EPIRQ; //< Endpoint Interrupt Requests
_IOR(0xe660) GPIFIE; //< GPIF Interrupt Enable
_IOR(0xe661) GPIFIRQ; //< GPIF Interrupt Request
_IOR(0xe662) USBERRIE; //< USB Error Interrupt Enables
_IOR(0xe663) USBERRIRQ; //< USB Error Interrupt Requests
_IOR(0xe664) ERRCNTLIM; //< USB Error counter and limit
_IOR(0xe665) CLRERRCNT; //< Clear Error Counter EC3:0
_IOR(0xe666) INT2IVEC; //< Interrupt 2 (USB) Autovector
_IOR(0xe667) INT4IVEC; //< Interrupt 4 (slave FIFO & 1 GPIF) Autovector
_IOR(0xe668) INTSETUP; //< Interrupt 2&4 setup

// Input/output

_IOR(0xe670) PORTACFG; //< I/O PORTA Alternate Configuration
_IOR(0xe671) PORTCCFG; //< I/O PORTC Alternate Configuration
_IOR(0xe672) PORTECFG; //< I/O PORTE Alternate Configuration
_IOR(0xe678) I2CS; //< I2C Bus Control & Status
_IOR(0xe679) I2DAT; //< I2C Bus Data
_IOR(0xe67a) I2CTL; //< I2C Bus Control
_IOR(0xe67b) XAUTODAT1; //< Autoptr1 MOVX access, when APTREN=1
_IOR(0xe67c) XAUTODAT2; //< Autoptr2 MOVX access, when APTREN=1
_IOR(0xe67d) UDMACRCH; //< UDMA CRC MSB
_IOR(0xe67e) UDMACRCL; //< UDMA CRC LSB
_IOR(0xe67f) UDMACRCQUALIFIER; //< UDMA CRC Qualifier

// USB control

_IOR(0xe680) USBCS; //< USB Control & Status
_IOR(0xe681) SUSPEND; //< Put chip into suspend
_IOR(0xe682) WAKEUPCS; //< Wakeup Control & Status
_IOR(0xe683) TOGCTL; //< Toggle Control
_IOR(0xe684) USBFRAMEH; //< USB Frame count H
_IOR(0xe685) USBFRAMEL; //< USB Frame count L
_IOR(0xe686) MICROFRAME; //< Microframe count, 0-7
_IOR(0xe687) FNADDR; //< USB Function address

// Endpoints

_IOR(0xe68a) EP0BCH; //< Endpoint 0 Byte Count H
_IOR(0xe68b) EP0BCL; //< Endpoint 0 Byte Count L
_IOR(0xe68d) EP1OUTBC; //< Endpoint 1 OUT Byte Count
_IOR(0xe68f) EP1INBC; //< Endpoint 1 IN Byte Count
_IOR(0xe690) EP2BCH; //< Endpoint 2 Byte Count H
_IOR(0xe691) EP2BCL; //< Endpoint 2 Byte Count L
_IOR(0xe694) EP4BCH; //< Endpoint 4 Byte Count H
_IOR(0xe695) EP4BCL; //< Endpoint 4 Byte Count L
_IOR(0xe698) EP6BCH; //< Endpoint 6 Byte Count H
_IOR(0xe699) EP6BCL; //< Endpoint 6 Byte Count L
_IOR(0xe69c) EP8BCH; //< Endpoint 8 Byte Count H
_IOR(0xe69d) EP8BCL; //< Endpoint 8 Byte Count L

// GPIF

_IOR(0xe6c0) GPIFWFSELECT; //< Waveform Selector
_IOR(0xe6c1) GPIFIDLECS; //< GPIF Done, GPIF IDLE drive mode
_IOR(0xe6c2) GPIFIDLECTL; //< Inactive Bus, CTL states
_IOR(0xe6c3) GPIFCTLCFG; //< CTL Drive Type
_IOR(0xe6c4) GPIFADRH; //< GPIF Address H
_IOR(0xe6c5) GPIFADRL; //< GPIF Address L

// Flowstate

_IOR(0xe6c6) FLOWSTATE; //< Flowstate Enable and Selector
_IOR(0xe6c7) FLOWLOGIC; //< Flowstate Logic
_IOR(0xe6c8) FLOWEQ0CTL; //< CTL-Pin States in Flowstate (when Logic = 0)
_IOR(0xe6c9) FLOWEQ1CTL; //< CTL-Pin States in Flowstate (when Logic = 1)
_IOR(0xe6ca) FLOWHOLDOFF; //< Holdoff Configuration
_IOR(0xe6cb) FLOWSTB; //< Flowstate Strobe Configuration
_IOR(0xe6cc) FLOWSTBEDGE; //< Flowstate Rising/Falling Edge Configuration
_IOR(0xe6cd) FLOWSTBPERIOD; //< Master-Strobe Half-Period
_IOR(0xe6ce) GPIFTCB3; //< GPIF Transaction Count Byte 3
_IOR(0xe6cf) GPIFTCB2; //< GPIF Transaction Count Byte 2
_IOR(0xe6d0) GPIFTCB1; //< GPIF Transaction Count Byte 1
_IOR(0xe6d1) GPIFTCB0; //< GPIF Transaction Count Byte 0
_IOR(0xe6d2) EP2GPIFFLGSEL; //< Endpoint 2 GPIF Flag select
_IOR(0xe6d3) EP2GPIFPFSTOP; //< Endpoint 2 GPIF stop transaction on prog. flag
_IOR(0xe6d4) EP2GPIFTRIG; //< Endpoint 2 GPIF Trigger
_IOR(0xe6da) EP4GPIFFLGSEL; //< Endpoint 4 GPIF Flag select
_IOR(0xe6db) EP4GPIFPFSTOP; //< Endpoint 4 GPIF stop transaction on prog. Flag
_IOR(0xe6dc) EP4GPIFTRIG; //< Endpoint 4 GPIF Trigger
_IOR(0xe6e2) EP6GPIFFLGSEL; //< Endpoint 6 GPIF Flag select
_IOR(0xe6e3) EP6GPIFPFSTOP; //< Endpoint 6 GPIF stop transaction on prog. flag
_IOR(0xe6e4) EP6GPIFTRIG; //< Endpoint 6 GPIF Trigger
_IOR(0xe6ea) EP8GPIFFLGSEL; //< Endpoint 8 GPIF Flag select
_IOR(0xe6eb) EP8GPIFPFSTOP; //< Endpoint 8 GPIF stop transaction on prog. flag
_IOR(0xe6ec) EP8GPIFTRIG; //< Endpoint 8 GPIF Trigger
_IOR(0xe6f0) XGPIFSGLDATH; //< GPIF Data H (16-bit mode only)
_IOR(0xe6f1) XGPIFSGLDATLX; //< Read/Write GPIF Data L & trigger transaction
_IOR(0xe6f2) XGPIFSGLDATLNOX; //< Read GPIF Data L, no transaction trigger
_IOR(0xe6f3) GPIFREADYCFG; //< Internal RDY, Sync/Async, RDY pin states
_IOR(0xe6f4) GPIFREADYSTAT; //< GPIF Ready Status
_IOR(0xe6f5) GPIFABORT; //< Abort GPIF Waveforms

// Endpoint buffers

_IOR(0xe740) EP0BUF[64]; //< EP0-IN/-OUT buffer
_IOR(0xe780) EP1OUTBUF[64]; //< EP1-OUT buffer
_IOR(0xe7c0) EP1INBUF[64]; //< EP1-IN buffer
_IOR(0xf000) EP2FIFOBUF[1024]; //< 512/1024 byte EP 2 / slave FIFO buffer (IN or OUT)
_IOR(0xf400) EP4FIFOBUF[512]; //< 512 byte EP 4 / slave FIFO buffer (IN or OUT)
_IOR(0xf800) EP6FIFOBUF[1024]; //< 512/1024 byte EP 6 / slave FIFO buffer (IN or OUT)
_IOR(0xfc00) EP8FIFOBUF[512]; //< 512 byte EP 8 / slave FIFO buffer (IN or OUT)

// Bits from DPS

#define _SEL         (1<<0)

// Bits from PCON

#define _IDLE        (1<<0)
#define _SMOD0       (1<<7)

// Bits from TCON

#define _IT0         (1<<0)
#define _IE0         (1<<1)
#define _IT1         (1<<2)
#define _IE1         (1<<3)
#define _TR0         (1<<4)
#define _TF0         (1<<5)
#define _TR1         (1<<6)
#define _TF1         (1<<7)

// Bits from TMOD

#define _M0_0        (1<<0)
#define _M1_0        (1<<1)
#define _CT_0        (1<<2)
#define _GATE_0      (1<<3)
#define _M0_1        (1<<4)
#define _M1_1        (1<<5)
#define _CT_1        (1<<6)
#define _GATE_1      (1<<7)

// Bits from CKCON

#define _MD0         (1<<0)
#define _MD1         (1<<1)
#define _MD2         (1<<2)
#define _T0M         (1<<3)
#define _T1M         (1<<4)
#define _T2M         (1<<5)

// Bits from EXIF

#define _USBNT       (1<<4)
#define _I2CINT      (1<<5)
#define _IE4         (1<<6)
#define _IE5         (1<<7)

// Bits from SCON0

#define _RI_0        (1<<0)
#define _TI_0        (1<<1)
#define _RB8_0       (1<<2)
#define _TB8_0       (1<<3)
#define _REN_0       (1<<4)
#define _SM2_0       (1<<5)
#define _SM1_0       (1<<6)
#define _SM0_0       (1<<7)

// Bits from IE

#define _EX0         (1<<0)
#define _ET0         (1<<1)
#define _EX1         (1<<2)
#define _ET1         (1<<3)
#define _ES0         (1<<4)
#define _ET2         (1<<5)
#define _ES1         (1<<6)
#define _EA          (1<<7)

// Bits from EP2468STAT

#define _EP2E        (1<<0)
#define _EP2F        (1<<1)
#define _EP4E        (1<<2)
#define _EP4F        (1<<3)
#define _EP6E        (1<<4)
#define _EP6F        (1<<5)
#define _EP8E        (1<<6)
#define _EP8F        (1<<7)

// Bits from EP24FIFOFLGS

#define _EP2FF       (1<<0)
#define _EP2EF       (1<<1)
#define _EP2PF       (1<<2)
#define _EP4FF       (1<<4)
#define _EP4EF       (1<<5)
#define _EP4PF       (1<<6)

// Bits from EP68FIFOFLGS

#define _EP6FF       (1<<0)
#define _EP6EF       (1<<1)
#define _EP6PF       (1<<2)
#define _EP8FF       (1<<4)
#define _EP8EF       (1<<5)
#define _EP8PF       (1<<6)

// Bits from AUTOPTRSETUP

#define _APTREN      (1<<1)
#define _APTR1INC    (1<<2)
#define _APTR2INC    (1<<3)

// Bits from IP

#define _PX0         (1<<0)
#define _PT0         (1<<1)
#define _PX1         (1<<2)
#define _PT1         (1<<3)
#define _PS0         (1<<4)
#define _PT2         (1<<5)
#define _PS1         (1<<6)

// Bits from EP01STAT

#define _EP1OUTBSY   (1<<1)
#define _EP1INBSY    (1<<2)

// Bits from SCON1

#define _RI_1        (1<<0)
#define _TI_1        (1<<1)
#define _RB8_1       (1<<2)
#define _TB8_1       (1<<3)
#define _REN_1       (1<<4)
#define _SM2_1       (1<<5)
#define _SM1_1       (1<<6)
#define _SM0_1       (1<<7)

// Bits from T2CON

#define _CPRL2       (1<<0)
#define _CT2         (1<<1)
#define _TR2         (1<<2)
#define _EXEN2       (1<<3)
#define _TCLK        (1<<4)
#define _RCLK        (1<<5)
#define _EXF2        (1<<6)
#define _TF2         (1<<7)

// Bits from PSW

#define _P           (1<<0)
#define _F1          (1<<1)
#define _OV          (1<<2)
#define _RS0         (1<<3)
#define _RS1         (1<<4)
#define _F0          (1<<5)
#define _AC          (1<<6)
#define _CY          (1<<7)

// Bits from EICON

#define _INT6        (1<<4)
#define _RESI        (1<<5)
#define _ERESI       (1<<6)

// Bits from EIE

#define _EUSB        (1<<0)
#define _EI2C        (1<<1)
#define _EX4         (1<<2)
#define _EX5         (1<<3)
#define _EX6         (1<<4)

// Bits from EIP

#define _PUSB        (1<<1)
#define _PI2C        (1<<2)
#define _PX4         (1<<3)
#define _PX5         (1<<4)
#define _PX6         (1<<5)

// Bits from GPCR2

#define _FULL_SPEED_ONLY  (1<<4)

// Bits from CPUCS

#define _8051RES     (1<<1)
#define _CLKOE       (1<<2)
#define _CLKINV      (1<<3)
#define _CLKSPD0     (1<<4)
#define _PORTCSTB    (1<<5)

// Bits from IFCONFIG

#define _IFCFG0      (1<<1)
#define _IFCFG1      (1<<2)
#define _GSTATE      (1<<3)
#define _IFCLKPOL    (1<<4)
#define _IFCLKOE     (1<<5)
#define _3048MHZ     (1<<6)
#define _IFCLKSRC    (1<<7)

// Bits from PINFLAGSAB

#define _FLAGA0      (1<<0)
#define _FLAGA1      (1<<1)
#define _FLAGA2      (1<<2)
#define _FLAGA3      (1<<3)
#define _FLAGB0      (1<<4)
#define _FLAGB1      (1<<5)
#define _FLAGB2      (1<<6)
#define _FLAGB3      (1<<7)

// Bits from PINFLAGSCD

#define _FLAGC0      (1<<0)
#define _FLAGC1      (1<<1)
#define _FLAGC2      (1<<2)
#define _FLAGC3      (1<<3)
#define _FLAGD0      (1<<4)
#define _FLAGD1      (1<<5)
#define _FLAGD2      (1<<6)
#define _FLAGD3      (1<<7)

// Bits from BREAKPT

#define _BPEN        (1<<1)
#define _BPPULSE     (1<<2)
#define _BREAK       (1<<3)

// Bits from UART230

#define _230UART0    (1<<0)
#define _230UART1    (1<<1)

// Bits from FIFOPINPOLAR

#define _SLWR        (1<<2)
#define _SLRD        (1<<3)
#define _SLOE        (1<<4)
#define _PKTEND      (1<<5)

// Bits from EP2FIFOIE, EP2FIFOIRQ, EP4FIFOIE, EP4FIFOIRQ, EP6FIFOIE, EP6FIFOIRQ, EP8FIFOIE, EP8FIFOIRQ, FIFOPINPOLAR

#define _FF          (1<<0)
#define _EF          (1<<1)

// Bits from REVCTL

#define _ENH_PKT     (1<<0)
#define _DYN_OUT     (1<<1)

// Bits from GPIFHOLDAMOUNT

#define _HOLDTIME0   (1<<0)
#define _HOLDTIME1   (1<<1)

// Bits from EP2CFG, EP6CFG

#define _BUF0        (1<<0)
#define _BUF1        (1<<1)
#define _SIZE        (1<<3)

// Bits from EP2CFG, EP4CFG, EP6CFG, EP8CFG

#define _DIR         (1<<6)

// Bits from EP1INCFG, EP1OUTCFG, EP2CFG, EP4CFG, EP6CFG, EP8CFG

#define _TYPE0       (1<<4)
#define _TYPE1       (1<<5)
#define _VALID       (1<<7)

// Bits from EP2FIFOCFG, EP4FIFOCFG, EP6FIFOCFG, EP8FIFOCFG

#define _WORDWIDE    (1<<0)
#define _ZEROLENIN   (1<<2)
#define _AUTOIN      (1<<3)
#define _AUTOOUT     (1<<4)
#define _OEP1        (1<<5)
#define _INFM1       (1<<6)

// Bits from ECCCFG

#define _ECCM        (1<<0)

// Bits from EP2FIFOPFH, EP6FIFOPFH

#define _PKTS2       (1<<5)

// Bits from EP2FIFOPFH, EP4FIFOPFH, EP6FIFOPFH, EP8FIFOPFH

#define _PKTS0       (1<<3)
#define _PKTS1       (1<<4)
#define _PKTSTAT     (1<<6)
#define _DECIS       (1<<7)

// Bits from EP2ISOINPKTS, EP4ISOINPKTS, EP6ISOINPKTS, EP8ISOINPKTS

#define _AADJ        (1<<7)

// Bits from EP2BCL, EP4BCL, EP6BCL, EP8BCL, INPKTEND, OUTPKTEND

#define _SKIP        (1<<7)

// Bits from EP2FIFOIE, EP4FIFOIE, EP6FIFOIE, EP8FIFOIE

#define _EDGEPF      (1<<3)

// Bits from EP2FIFOIE, EP2FIFOIRQ, EP4FIFOIE, EP4FIFOIRQ, EP6FIFOIE, EP6FIFOIRQ, EP8FIFOIE, EP8FIFOIRQ

#define _PF          (1<<2)

// Bits from NAKIE, NAKIRQ

#define _IBN         (1<<0)

// Bits from USBIE, USBIRQ

#define _SUDAV       (1<<0)
#define _SOF         (1<<1)
#define _SUTOK       (1<<2)
#define _SUSP        (1<<3)
#define _URES        (1<<4)
#define _HSGRANT     (1<<5)
#define _EP0ACK      (1<<6)

// Bits from EPIE, EPIRQ

#define _EP0IN       (1<<0)
#define _EP0OUT      (1<<1)
#define _EP1IN       (1<<2)
#define _EP1OUT      (1<<3)

// Bits from GPIFIE, GPIFIRQ

#define _GPIFDONE    (1<<0)
#define _GPIFWF      (1<<1)

// Bits from USBERRIE, USBERRIRQ

#define _ERRLIMIT    (1<<0)
#define _ISOEP2      (1<<4)
#define _ISOEP4      (1<<5)
#define _ISOEP6      (1<<6)
#define _ISOEP8      (1<<7)

// Bits from INTSETUP

#define _AV4EN       (1<<0)
#define _INT4SRC     (1<<1)
#define _AV2EN       (1<<3)

// Bits from PORTACFG

#define _INT0        (1<<0)
#define _INT1        (1<<1)
#define _SLCS        (1<<6)
#define _FLAGD       (1<<7)

// Bits from PORTCCFG

#define _GPIFA0      (1<<0)
#define _GPIFA1      (1<<1)
#define _GPIFA2      (1<<2)
#define _GPIFA3      (1<<3)
#define _GPIFA4      (1<<4)
#define _GPIFA5      (1<<5)
#define _GPIFA6      (1<<6)
#define _GPIFA7      (1<<7)

// Bits from PORTECFG

#define _T0OUT       (1<<0)
#define _T1OUT       (1<<1)
#define _T2OUT       (1<<2)
#define _RXD0OUT     (1<<3)
#define _RXD1OUT     (1<<4)
#define _INT6EX      (1<<5)
#define _T2EX        (1<<6)
#define _GPIFA8      (1<<7)

// Bits from I2CS

#define _DONE        (1<<0)
#define _ACK         (1<<1)
#define _BERR        (1<<2)
#define _ID0         (1<<3)
#define _ID1         (1<<4)
#define _LASTRD      (1<<5)
#define _STOP        (1<<6)
#define _START       (1<<7)

// Bits from I2CTL

#define _400KHZ      (1<<0)
#define _STOPIE      (1<<1)

// Bits from USBCS

#define _SIGRSUME    (1<<0)
#define _RENUM       (1<<1)
#define _NOSYNSOF    (1<<2)
#define _DISCON      (1<<3)
#define _HSM         (1<<7)

// Bits from WAKEUPCS

#define _WUEN        (1<<0)
#define _WU2EN       (1<<1)
#define _DPEN        (1<<2)
#define _WUPOL       (1<<4)
#define _WU2POL      (1<<5)
#define _WU          (1<<6)
#define _WU2         (1<<7)

// Bits from TOGCTL

#define _IO          (1<<4)
#define _R           (1<<5)
#define _S           (1<<6)
#define _Q           (1<<7)

// Bits from GPIFWFSELECT

#define _FIFORD0     (1<<0)
#define _FIFORD1     (1<<1)
#define _FIFOWR0     (1<<2)
#define _FIFOWR1     (1<<3)
#define _SINGLERD0   (1<<4)
#define _SINGLERD1   (1<<5)
#define _SINGLEWR0   (1<<6)
#define _SINGLEWR1   (1<<7)

// Bits from GPIFCTLCFG

#define _TRICTL      (1<<7)

// Bits from FLOWEQ0CTL, FLOWEQ1CTL, GPIFCTLCFG, GPIFIDLECTL

#define _CTL0        (1<<0)
#define _CTL1        (1<<1)
#define _CTL2        (1<<2)
#define _CTL3        (1<<3)
#define _CTL4        (1<<4)
#define _CTL5        (1<<5)

// Bits from FLOWSTATE

#define _FS2         (1<<2)
#define _FSE         (1<<7)

// Bits from EP2GPIFFLGSEL, EP4GPIFFLGSEL, EP6GPIFFLGSEL, EP8GPIFFLGSEL, FLOWSTATE

#define _FS0         (1<<0)
#define _FS1         (1<<1)

// Bits from FLOWLOGIC

#define _TERMB0      (1<<0)
#define _TERMB1      (1<<1)
#define _TERMB2      (1<<2)
#define _TERMA0      (1<<3)
#define _TERMA1      (1<<4)
#define _TERMA2      (1<<5)
#define _LFUNC0      (1<<6)
#define _LFUNC1      (1<<7)

// Bits from FLOWEQ0CTL, FLOWEQ1CTL

#define _CTL0E0      (1<<4)
#define _CTL0E1      (1<<5)
#define _CTL0E2      (1<<6)
#define _CTL0E3      (1<<7)

// Bits from FLOWHOLDOFF

#define _HOCTL0      (1<<0)
#define _HOCTL1      (1<<1)
#define _HOCTL2      (1<<2)
#define _HOSTATE     (1<<3)
#define _HOPERIOD0   (1<<4)
#define _HOPERIOD1   (1<<5)
#define _HOPERIOD2   (1<<6)
#define _HOPERIOD3   (1<<7)

// Bits from FLOWSTB

#define _MSTB0       (1<<0)
#define _MSTB1       (1<<1)
#define _MSTB2       (1<<2)
#define _SUSTAIN     (1<<4)
#define _CTLTOGL     (1<<5)
#define _RDYASYNC    (1<<6)
#define _SLAVE       (1<<7)

// Bits from FLOWSTBEDGE

#define _RISING      (1<<0)
#define _FALLING     (1<<1)

// Bits from EP2GPIFPFSTOP, EP4GPIFPFSTOP, EP6GPIFPFSTOP, EP8GPIFPFSTOP

#define _FIFOFLAG    (1<<0)

// Bits from GPIFREADYCFG

#define _TCXRDY5     (1<<5)
#define _SAS         (1<<6)
#define _INTRDY      (1<<7)

// Bits from GPIFREADYSTAT

#define _RDY0        (1<<0)
#define _RDY1        (1<<1)
#define _RDY2        (1<<2)
#define _RDY3        (1<<3)
#define _RDY4        (1<<4)
#define _RDY5        (1<<5)

#endif
