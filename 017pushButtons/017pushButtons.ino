int LEDpin = 5;
int buttonPin = 13;
int buttonRead;
int dt = 100;
void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(dt);
  if(buttonRead == 1){
    digitalWrite(LEDpin,LOW);
  }
  if(buttonRead == 0){
    digitalWrite(LEDpin,HIGH);
  }
}