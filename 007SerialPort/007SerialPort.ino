int j=1;
String myString = "j = ";
int waitTime = 750;

void setup(){
	Serial.begin(115200);
}

void loop(){
	Serial.print(myString);
  	Serial.println(j);
  	j=j+1;
  	delay(waitTime);
}