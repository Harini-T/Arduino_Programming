int readVal;
float v2;
int waitTime = 700;

void setup(){
	Serial.begin(9600);
  	pinMode(A5,INPUT);
}

void loop(){
	readVal = analogRead(A5);
  	v2 = (5./1023.)*readVal;
  	Serial.println(v2);
  	delay(waitTime);
}