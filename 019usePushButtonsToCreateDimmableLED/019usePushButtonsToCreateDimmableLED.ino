int LEDpin = 5;
int buttonPin1 = 12;
int buttonPin2 = 11;
int buttonVal1, buttonVal2;
int dt = 250;
int LEDbright = 0;
void setup()
{
  pinMode(LEDpin, OUTPUT);
  pinMode(buttonPin1,INPUT);
  pinMode(buttonPin2,INPUT);
  
}

void loop()
{
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  if(buttonVal1 == 0){
    LEDbright+=5;
  }
  if(buttonVal2 == 0){
    LEDbright-=5;
  }
  if(LEDbright>255){
    LEDbright=255;
  }
  if(LEDbright<0){
    LEDbright = 0;
  }
  analogWrite(LEDpin,LEDbright);
}