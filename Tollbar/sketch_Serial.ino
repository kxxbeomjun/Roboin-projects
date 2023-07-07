#include <Servo.h>

int trig = 12;
int echo = 13;

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  myServo.attach(7);
  myServo.write(0);
}

void loop() {
  long duration, distance;
  digitalWrite(trig, LOW);
  digitalWrite(trig, HIGH);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration*17/1000;
  Serial.println(duration);
  Serial.print(distance);
  Serial.println(" Cm");
  if (distance > 0 && distance <= 5){
    Serial.println("감지됨");
    myServo.write(180);
    delay(10000);
    myServo.write(0);
  }
   

}
