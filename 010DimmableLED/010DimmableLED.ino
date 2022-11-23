int potPin = A5;
int gPin = 6;
int potVal;
float LEDVal;
int waitTime = 500;

void setup(){
  pinMode(potPin,INPUT);
  pinMode(gPin, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  potVal = analogRead(potPin);
  LEDVal = (255./1023.)* potVal;
  analogWrite(gPin,LEDVal);
  Serial.println(LEDVal);
  delay(waitTime);
}