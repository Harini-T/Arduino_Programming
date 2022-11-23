int lightPin = A5;
int lightVal;
int waitTime = 250;
void setup(){
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(waitTime);
}