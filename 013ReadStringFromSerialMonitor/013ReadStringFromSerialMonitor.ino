String msg1 = "Which colour do you want?";
String ledColor;
int L1=6, L2=5, L3=4;

void setup(){
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
}

void loop(){
  Serial.println(msg1);
  while(Serial.available()==0){}
  ledColor = Serial.readString();
  Serial.println(ledColor);
  if(ledColor == "red" || ledColor == "RED"){
  	digitalWrite(L1,HIGH);
    digitalWrite(L2,LOW);
    digitalWrite(L3,LOW);
  }
  else if(ledColor == "green" || ledColor == "GREEN"){
  	digitalWrite(L1,LOW);
    digitalWrite(L2,HIGH);
    digitalWrite(L3,LOW);
  }
  else if(ledColor == "yellow" || ledColor == "YELLOW"){
  	digitalWrite(L1,LOW);
    digitalWrite(L2,LOW);
    digitalWrite(L3,HIGH);
  }
  else{
  	Serial.println("Please enter valid color");
  }

}

/*
String msg1 = "What is your name?";
String msg2 = "Hello ";
String msg3 = ", Welcome to Arduino!";
String name;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(msg1);
  while(Serial.available() == 0){}
  name = Serial.readString();
  
  Serial.print(msg2);
  Serial.print(name);
  Serial.println(msg3);
}
*/