# Tollbar
로보인 차단봉 제작 프로젝트


### 달성목표
+ 아두이노에 서보 모터를 제어할 수 있는 회로 설계
+ Cero CAD 프로그램으로 차단봉 모델링, 3D 프린터로 출력 및 서보 모터에 부착
+ 3000ms 간격으로 0 ~ 90



Arduino code
```
toll_bar.ino
```
가 매인 코드고

```
sketch_Serial.ino
```
는 시리얼 모니터를 통해 duration, distance 값과 감지되었는지 안되었는지를 판단하는 코드이다.
