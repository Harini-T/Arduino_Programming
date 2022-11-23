float v2 = 0;
int readPin = A0;
int delayTime = 500;
int readVal = 0;

void setup(){
	pinMode(readPin,INPUT);
  	Serial.begin (9600);
}

void loop(){
	readVal = analogRead(readPin);
  	//Serial.println(readVal);
  	v2 = (5./1023.) * readVal;
  	Serial.println(v2);
  	delay(delayTime);
}
