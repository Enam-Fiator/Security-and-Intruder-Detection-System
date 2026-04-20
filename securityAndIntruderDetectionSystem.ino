//Security and intruder detector System
#include <Servo.h>

Servo myServo;

int trans = 2;
int rec = 4;

int SoundSensor = 6;

int lightSensor = A0;

long distance;
int duration;

int red = 10;
int green = 3;
int blue = 5;

int buzzer = 7;

int white = 9;

void setup() {
  // put your setup code here, to run once:
myServo.attach(8);
pinMode(trans, OUTPUT);
pinMode(rec, INPUT);

pinMode(SoundSensor, INPUT);
pinMode(lightSensor, INPUT);

pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

pinMode(buzzer, OUTPUT);

pinMode(white, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(trans,LOW);
delayMicroseconds(2);

digitalWrite(trans, HIGH);
delayMicroseconds(10);
digitalWrite(trans, LOW);

duration = pulseIn(rec,HIGH);
distance = duration * 0.034 / 2;


Serial.print("Distance: ");
Serial.print(distance);
Serial.print("cm");

delay(100);

int soundState =  LOW;
int ldrState = analogRead(lightSensor);
Serial.print("Sound: ");
Serial.println(soundState);
Serial.print("LDR: ");
Serial.println(ldrState);




if (distance <= 50 ){
  Serial.println("Motion Detected.");
}
if(soundState == HIGH){
  Serial.println("Sound Detected");
}

if(ldrState == 0){
  Serial.println("light detected");
}


if  ( distance <= 50 || ldrState >=90 ||soundState == HIGH )

 {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(buzzer, HIGH);
  digitalWrite(white, HIGH);
  myServo.write(180);
  delay(300);
} 
else{
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(white, LOW);
  myServo.write(0);
  delay(300);

}

}


