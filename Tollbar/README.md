# Tollbar
로보인 차단봉 제작 프로젝트

<img src="https://github.com/kxxbeomjun/Roboin-projects/assets/121419945/904d88ec-bd7d-4a4e-8b1c-ce5432299d0f" width="46% " height="46%">

### 달성 목표
+ 아두이노에 서보 모터를 제어할 수 있는 회로 설계
+ Cero CAD 프로그램으로 차단봉 모델링, 3D 프린터로 출력 및 서보 모터에 부착
+ 일정 거리 이내에 **물체가 감지**될 시 차단봉이 올라가고, 10초 후 다시 내려가게끔 코드 구성
  
#### 레포지토리 구성
+ toll_bar.ino -> 메인 코드
+ sketch_Serial.ino -> 시리얼 모니터를 통해 duration, distance 값과 감지 여부 판단 코드

#### 코드 구성시 고려한 점
1. 초음파센서는 digitalWrite 함수를 이용해 trig의 상태를 LOW -> HIGH -> LOW으로 바꿔줌으로써 음파를 쏜다. 이 음파가 echo핀으로 들어간다. 감지된 음파 시간 차이를 계산하여 거리를 측정한다.
2. 서보모터의 write()함수는 0-180도만 움직일 수 있으므로 어떤 방향으로 돌아가는지 그림을 그려 판단해야한다.

#### Reference
+ 츠음파 센서 : https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/

