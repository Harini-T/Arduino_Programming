// C++ code
//
/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/
int S = 200;
int O = 700;
int longWait = 1000;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  
  //Blink S 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S);
  
  //Blink O
  digitalWrite(LED_BUILTIN, HIGH);
  delay(O); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(O); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(O); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(O); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(O); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(O);
  
  //Blink S
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S); 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(S); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(S);
  
  //Long wait
  delay(longWait);
}