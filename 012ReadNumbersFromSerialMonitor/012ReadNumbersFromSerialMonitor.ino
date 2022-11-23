//String msg1 = "Please enter your number: ";
//String msg2 = "Your number is: ";
String blinkText = "Enter number of blinks you want: ";
//int myNum;
int numBlinks=0;
int redLed = 13;
int i;
int waitTime =500;
void setup()
{
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
}

void loop()
{
  //Serial.println(msg1);
  Serial.println(blinkText);
  while(Serial.available()==0){
  
  }
  //myNum = Serial.parseInt();
  //Serial.print(msg2);
  //Serial.println(myNum);
  numBlinks = Serial.parseInt();
  for(i=0;i<numBlinks;i++){
  	digitalWrite(redLed,HIGH);
    delay(waitTime);
    digitalWrite(redLed, LOW);
    delay(waitTime);
  }
}