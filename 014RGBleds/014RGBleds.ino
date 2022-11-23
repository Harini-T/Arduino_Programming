String msg1 = "Which colour do you want?";
String ledColor;
int red=6, green=5, blue=4;

void setup(){
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop(){
  Serial.println(msg1);
  while(Serial.available()==0){}
  ledColor = Serial.readString();
  Serial.println(ledColor);
  if(ledColor == "red" || ledColor == "RED"){
  	digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }
  else if(ledColor == "green" || ledColor == "GREEN"){
  	digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  else if(ledColor == "blue" || ledColor == "BLUE"){
  	digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
  }
  else if(ledColor == "yellow" || ledColor == "YELLOW"){
  	analogWrite(red,255);
    analogWrite(green,255);
    analogWrite(blue,0);
  }
  else if(ledColor == "magenta" || ledColor == "MAGENTA"){
  	analogWrite(red,255);
    analogWrite(green,0);
    analogWrite(blue,255);
  }
  else if(ledColor == "cyan" || ledColor == "CYAN"){
  	analogWrite(red,0);
    analogWrite(green,255);
    analogWrite(blue,255);
  }
  else{
  	Serial.println("Please enter valid color");
  }

}
