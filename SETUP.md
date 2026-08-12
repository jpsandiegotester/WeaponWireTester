# Hardware Setup Notes

Unclear if drivers on macOS were actually necessary or if a USB_C-to-USB_C fixed the issue:
https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers?tab=downloads

Thread about [USB-C cables](https://forum.arduino.cc/t/how-to-connect-esp32-to-a-mac-m2/1265191/3)

Initial verified Arduino + ESP32 setup worked correctly with this [test sketch](https://www.amazon.com/portal/customer-reviews/srp/-/R3ABNC4GO68GSK/ref=cm_cr_arp_d_rvw_ttl?ie=UTF8) in an Amazon Review. Saved locally into repo.


# Arduino Studio Setup Notes

## Board Manager URLs:
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
(Unsure if this was needed)

Use "esp32 by Espressif Systems 2.0.17" - not 3.3.11 / 3.x

## Libraries Installed:
Adafruit NeoPixel
MD_MAX72XX
