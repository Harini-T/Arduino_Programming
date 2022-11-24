int LEDpin = 5;
int buttonPin = 12;
int dt = 200;
int LEDstate = 0;
int buttonNew;
int buttonOld = 1;
void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  buttonNew = digitalRead(buttonPin);
  Serial.println(buttonNew);
  //Serial.println(LEDstate);
  if(buttonOld == 0 && buttonNew == 1){
    if(LEDstate == 0){
      digitalWrite(LEDpin,HIGH);
      LEDstate = 1; 
    }
    else{
      digitalWrite(LEDpin,LOW);
      LEDstate = 0;
    }
  }
  buttonOld = buttonNew;
  delay(dt);
}