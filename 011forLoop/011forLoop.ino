int redLed = 6;
int yellowLed = 7;
int redTime = 500;
int yellowTime = 500;
int redBlink = 3;
int yellowBlink = 5;
int i;
void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop()
{
  for(i=0;i<redBlink;i++){
  	digitalWrite(redLed, HIGH);
    delay(redTime);
    digitalWrite(redLed, LOW);
    delay(redTime);
  }
  
  for(int i=0;i<yellowBlink;i++){
  	digitalWrite(yellowLed, HIGH);
    delay(yellowTime);
    digitalWrite(yellowLed, LOW);
    delay(yellowTime);
  }
}