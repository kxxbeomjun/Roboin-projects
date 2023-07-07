# Calculator 
로보인 계산기 제작 프로젝트

<img width="45%" height="45%" src="https://github.com/kxxbeomjun/Roboin-projects/assets/121419945/c48d17b4-38ab-41bd-958f-f34bcbaa3e43"/>

### 달성 목표
+ 라즈베리파이 OS 설치 후 PC와의 원격 연결(VNC Server) 또는 모니터를 활용한 직접 연결
+ C or Python 개발환경 구축(WiringPi or RPI.GPIO)
+ LCD와 시리얼 통신을 활용하여 입력받은 계산의 결과를 출력하는 계산기를 만들기
+ 시리얼 모니터로 계산을 송신하면 LCD로 계산과 결과를 함께 출력

##### Source code
```
import serial

SER = serial.Serial('/dev/ttyACM0', 9600)

while True:
  s = input() + '\n'
  SER.write(s.encode())
```

##### Reference
+ 라즈베리 파이와 LCD
https://www.raspberrypi-spy.co.uk/2015/05/using-an-i2c-enabled-lcd-screen-with-the-raspberry-pi/
+ USB Gadget - Preparation
https://novamostra.com/2020/05/15/rasperry-pi-as-a-usb-gadget/
+ USBIP
https://learn.microsoft.com/ko-kr/windows/wsl/connect-usb
