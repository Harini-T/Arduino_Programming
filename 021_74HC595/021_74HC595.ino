int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LED1s = 0b10101010;
byte LED2s = 0b01010101;

byte LEDs_counter = 0b00000000;
byte LEDs_shift = 0b00000001;

int dt = 250;
void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
}

void loop()
{
  /*
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LED1s);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LED2s);
  digitalWrite(latchPin,HIGH);
  delay(dt);
  
  //Binarycounter
  for(byte i=0;i<=0b11111111;i++){
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs_counter);
  digitalWrite(latchPin,HIGH);
  LEDs_counter+=1;
  delay(dt+dt);
  }
  */
  
  //Left and right shift
  LEDs_shift = 0b00000001;
  while(LEDs_shift!=0){
  	digitalWrite(latchPin, LOW);
  	shiftOut(dataPin, clockPin, LSBFIRST, LEDs_shift);
  	digitalWrite(latchPin,HIGH);
  	LEDs_shift=LEDs_shift<<1;
  	delay(dt);
  }
  LEDs_shift = 0b10000000;
  while(LEDs_shift!=0){
  	digitalWrite(latchPin, LOW);
  	shiftOut(dataPin, clockPin, LSBFIRST, LEDs_shift);
  	digitalWrite(latchPin,HIGH);
  	LEDs_shift=LEDs_shift>>1;
  	delay(dt);
  }
  
}