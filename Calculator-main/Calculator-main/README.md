# Calculator
Roboin project - Calculator code

#Source code
```
import serial

SER = serial.Serial('/dev/ttyACM0', 9600)

while True:
  s = input() + '\n'
  SER.write(s.encode())
```
lcd_i2c.py -> 라즈베리파이

<Reference>
라즈베리 파이와 LCD
https://www.raspberrypi-spy.co.uk/2015/05/using-an-i2c-enabled-lcd-screen-with-the-raspberry-pi/

USB Gadget - Preparation
https://novamostra.com/2020/05/15/rasperry-pi-as-a-usb-gadget/

USBIP
https://learn.microsoft.com/ko-kr/windows/wsl/connect-usb
