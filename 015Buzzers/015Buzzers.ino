int buzzerPin = 7, potPin = A5;
int potVal;
void setup(){
  pinMode(buzzerPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop(){
  potVal = analogRead(potPin);
  Serial.println(potVal);
  while(potVal>700){
    digitalWrite(buzzerPin,HIGH);
    potVal = analogRead(potPin);
    Serial.println(potVal);
  }
  digitalWrite(buzzerPin,LOW);
}