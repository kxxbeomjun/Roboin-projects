#include <Servo.h>

 
int trig = 12;
int echo = 13;

Servo myServo;


void setup() {
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
  distance = duration*0.017;
  
  if (distance > 0 && distance <= 5){
    myServo.write(180);
    delay(10000);
    myServo.write(0);
  }

}    
