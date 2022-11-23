int readVal;
float v2;
int waitTime = 700;
int myPin = A5;
int ledPin = 6;
void setup(){
	Serial.begin(9600);
  	pinMode(A5,INPUT);
  	pinMode(ledPin, OUTPUT);
}

void loop(){
	readVal = analogRead(myPin);
  	v2 = (5./1023.)*readVal;
  	Serial.println(v2);
  	if(v2>4.0){
  		digitalWrite(ledPin,HIGH);
  	}
  	else{
  		digitalWrite(ledPin,LOW);
  	}
  	delay(waitTime);
}