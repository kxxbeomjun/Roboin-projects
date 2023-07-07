int trig_pin = 13; // trig 핀을 아두이노의 13번핀에 연결
int echo_pin = 12; // echo 핀을 아두이노의 12번핀에 연결
int LED_pin = 11; // LED를 아두이노의 11번핀에 연결

void setup() {
Serial.begin(9600); // 시리얼 통신 시작
pinMode(LED_pin, OUTPUT); // LED는 출력으로 설정
pinMode(trig_pin, OUTPUT); // trig_pin은 아두이노의 신호를 받으므로 출력모드로 설정
pinMode(echo_pin, INPUT); // echo_pin은 아두이노에 신호를 주므로 입력모드
}

void loop() { 
// 초음파를 10us(마이크로 초)동안 발사
digitalWrite(trig_pin, LOW);
digitalWrite(echo_pin, LOW);
delayMicroseconds(2);

digitalWrite(trig_pin, HIGH);
delayMicroseconds(10);

digitalWrite(trig_pin, LOW);
// echo_pin이 HIGH가 될때까지의 시간을 duration 변수에 저장
unsigned long duration = pulseIn(echo_pin, HIGH); 
// 거리를 계산
float distance = ((float)(340 * duration) / 10000) / 2; 
Serial.print(distance);
Serial.print("cm\n");
if (distance <= 40) { // ★★★★★★★ 물체와의 거리가 40cm 이하이면(거북목이 되었으면)★★★★★★★
digitalWrite(LED_pin, HIGH); // 경고음을 출력
delay(500); // LED ON 상태 0.5초간 유지
digitalWrite(LED_pin, LOW); // LED끄기
}

delay(500); // 0.5초 대기후 다시 거리 측정

}
