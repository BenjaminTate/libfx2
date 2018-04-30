#include <fx2lib.h>
#include <fx2usb.h>
#include <fx2delay.h>
#include <fx2eeprom.h>

const struct usb_desc_device
usb_device = {
  .bLength              = sizeof(struct usb_desc_device),
  .bDescriptorType      = USB_DESC_DEVICE,
  .bcdUSB               = 0x0200,
  .bDeviceClass         = 255,
  .bDeviceSubClass      = 255,
  .bDeviceProtocol      = 255,
  .bMaxPacketSize0      = 64,
  .idVendor             = 0x04b4,
  .idProduct            = 0x8613,
  .bcdDevice            = 0x0000,
  .iManufacturer        = 1,
  .iProduct             = 2,
  .iSerialNumber        = 0,
  .bNumConfigurations   = 1,
};

const struct usb_desc_configuration
usb_configs[] = {
  {
    .bLength              = sizeof(struct usb_desc_configuration),
    .bDescriptorType      = USB_DESC_CONFIGURATION,
    .wTotalLength         = sizeof(struct usb_desc_configuration) +
                            sizeof(struct usb_desc_interface),
    .bNumInterfaces       = 1,
    .bConfigurationValue  = 0,
    .iConfiguration       = 0,
    .bmAttributes         = USB_ATTR_RESERVED_1,
    .bMaxPower            = 50,
  }
};

const struct usb_desc_interface
usb_interfaces[] = {
  {
    .bLength              = sizeof(struct usb_desc_interface),
    .bDescriptorType      = USB_DESC_INTERFACE,
    .bInterfaceNumber     = 0,
    .bAlternateSetting    = 0,
    .bNumEndpoints        = 0,
    .bInterfaceClass      = 255,
    .bInterfaceSubClass   = 255,
    .bInterfaceProtocol   = 255,
    .iInterface           = 0,
  }
};

const char *
usb_strings[] = {
  "whitequark@whitequark.org",
  "Cypress FX2 series bootloader",
};

const struct usb_descriptor_set
usb_descriptor_set = {
  .device          = &usb_device,
  .config_count    = ARRAYSIZE(usb_configs),
  .configs         = usb_configs,
  .interface_count = ARRAYSIZE(usb_interfaces),
  .interfaces      = usb_interfaces,
  .string_count    = ARRAYSIZE(usb_strings),
  .strings         = usb_strings,
};

enum {
  USB_REQ_CYPRESS_EEPROM_SB  = 0xA2,
  USB_REQ_CYPRESS_RENUMERATE = 0xA8,
  USB_REQ_CYPRESS_EEPROM_DB  = 0xA9,
};

// We perform lengthy operations in the main loop to avoid hogging the interrupt.
// This flag is used for synchronization between the main loop and the ISR;
// to allow new SETUP requests to arrive while the previous one is still being
// handled (with all data received), the flag should be reset as soon as
// the entire SETUP request is parsed.
volatile bool pending_setup;

void handle_usb_setup(__xdata struct usb_req_setup *req) {
  req;
  if(pending_setup) {
    STALL_EP0();
  } else {
    pending_setup = true;
  }
}

void handle_pending_usb_setup() {
  __xdata struct usb_req_setup *req = (__xdata struct usb_req_setup *)SETUPDAT;

  if(req->bmRequestType == USB_RECIP_DEVICE|USB_TYPE_VENDOR|USB_DIR_OUT &&
     req->bRequest == USB_REQ_CYPRESS_RENUMERATE) {
    pending_setup = false;

    USBCS |= _DISCON;
    delay_ms(10);
    USBCS &= ~_DISCON;

    return;
  }

  if((req->bmRequestType == USB_RECIP_DEVICE|USB_TYPE_VENDOR|USB_DIR_IN ||
      req->bmRequestType == USB_RECIP_DEVICE|USB_TYPE_VENDOR|USB_DIR_OUT) &&
     (req->bRequest == USB_REQ_CYPRESS_EEPROM_SB ||
      req->bRequest == USB_REQ_CYPRESS_EEPROM_DB)) {
    bool     arg_read  = (req->bmRequestType & USB_DIR_IN);
    bool     arg_dbyte = (req->bRequest == USB_REQ_CYPRESS_EEPROM_DB);
    uint8_t  arg_chip  = arg_dbyte ? 0x51 : 0x50;
    uint16_t arg_addr  = req->wValue;
    uint16_t arg_len   = req->wLength;
    pending_setup = false;

    while(arg_len > 0) {
      uint8_t len = arg_len < 64 ? arg_len : 64;

      if(arg_read) {
        while(EP0CS & _BUSY);
        if(!eeprom_read(arg_chip, arg_addr, EP0BUF, len, arg_dbyte)) {
          STALL_EP0();
          break;
        }
        SETUP_EP0_BUF(len);
      } else {
        SETUP_EP0_BUF(0);
        while(EP0CS & _BUSY);
        if(!eeprom_write(arg_chip, arg_addr, EP0BUF, len, arg_dbyte, /*timeout=*/166)) {
          STALL_EP0();
          break;
        }
      }

      arg_len  -= len;
      arg_addr += len;
    }

    return;
  }

  STALL_EP0();
}

int main() {
  CPUCS = _CLKOE|_CLKSPD1;
  usb_init(false);

  while(1) {
    if(pending_setup)
      handle_pending_usb_setup();
  }
}
