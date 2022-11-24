#include <Servo.h>
int servoPin = 9;
int pos = 0;

Servo myServo;

void setup()
{
  Serial.begin(9600);
  myServo.attach(servoPin);
}

void loop()
{
  Serial.println("What Angle for the servo?");
  while(Serial.available() == 0){}
  pos = Serial.parseInt();
  myServo.write(pos);
}