//Declare DC Right Motor Pins
# define enaAR 5
# define in1 1
# define in2 2
//Declare DC Left Motor Pins
# define enaBL 6
# define in3 3
# define in4 4
//Declare IR Sensor
# define irA 8
# define irB 9
int irAstate = 0;
int irBstate = 0;
 
void setup()
{
//Set Pin Mode of Motor Driver to Output
 pinMode(enaAR, OUTPUT);
 pinMode(enaBL, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
//Set Pin Mode for IR Sensor to Input
 pinMode(irA, INPUT);
 pinMode(irB, INPUT);
Serial.begin(9600);
}
 
void motor_speed(int spd)
{
analogWrite(enaAR,spd*2);
analogWrite(enaBL,spd);
}
 
void motor_direction(int dir)
{
if (dir == 1) { // go  forward
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW);
 }
 
if (dir == 2) { // turn left
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
}
 
if (dir == 3) { // turn right

digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,HIGH);
digitalWrite(in4,LOW); 
 }
 
if (dir == 4) { // go backward
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
 }
 
}
 
void loop() {
motor_speed(64);
irAstate = digitalRead(irA);
irBstate = digitalRead(irB);
Serial.println((String)"a ="+irAstate+"\n");
Serial.println((String)"b ="+irBstate+"\n");
 
 if(irAstate == HIGH && irBstate ==HIGH)
 {
  motor_direction(1);
 } 
 else if(irAstate == HIGH && irBstate == LOW) 
 {
  motor_direction(2);
 } 
 
 else if(irAstate == LOW && irBstate == HIGH)
 {
  motor_direction(3);
 } 
 
 else if(irAstate == LOW && irBstate == LOW)
 {
  motor_direction(4);
 } 
 
}
