//Blink 3 LEDS (L1-5times, L2-10times, L3-15times)
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  int i;
  for(i=0;i<5;i++){
  	digitalWrite(9,HIGH);
    delay(100);
    digitalWrite(9,LOW);
    delay(100);
  }
  for(i=0;i<10;i++){
  	digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
  for(i=0;i<15;i++){
  	digitalWrite(11,HIGH);
    delay(100);
    digitalWrite(11,LOW);
    delay(100);
  }
}