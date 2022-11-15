void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); //Setting pin13 to Output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH); //Turning ON the LED connected to pin 13
  delay(500); //Delay of 0.5 second
  digitalWrite(13,LOW); //Turning OFF the LED connected to pin 13
  delay(500); //Delay of 0.5 second
}
