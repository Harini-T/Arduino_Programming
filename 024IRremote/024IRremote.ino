#include <IRremote.h>

int redPin = 12;
int bluePin = 11;
int greenPin = 10;
int IRpin=9;

IRrecv IR(IRpin);
decode_results cmd;

void setup(){
  pinMode(redPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  Serial.begin(9600);
  IR.enableIRIn();
}

void loop(){
  while(IR.decode(&cmd)==0){}
  Serial.println(cmd.value,HEX);
  switch(cmd.value){
    case 0xFD00FF:
    	digitalWrite(redPin,HIGH);
    	digitalWrite(bluePin,HIGH);
    	digitalWrite(greenPin,HIGH);
  		break;
    case 0XFD40BF:
       	digitalWrite(redPin,LOW);
    	digitalWrite(bluePin,LOW);
    	digitalWrite(greenPin,LOW);
  		break;
    case 0xFD08F7:
       	digitalWrite(redPin,HIGH);
    	digitalWrite(bluePin,LOW);
    	digitalWrite(greenPin,LOW);
  		break;
    case 0XFD8877:
       	digitalWrite(redPin,LOW);
    	digitalWrite(bluePin,HIGH);
    	digitalWrite(greenPin,LOW);
  		break;
    case 0XFD48B7:
       	digitalWrite(redPin,LOW);
    	digitalWrite(bluePin,LOW);
    	digitalWrite(greenPin,HIGH);
  		break;
    case 0XFD28D7:
       	digitalWrite(redPin,HIGH);
    	digitalWrite(bluePin,HIGH);
    	digitalWrite(greenPin,LOW);
  		break;
    case 0XFDA857:
       	digitalWrite(redPin,HIGH);
    	digitalWrite(bluePin,LOW);
    	digitalWrite(greenPin,HIGH);
  		break;
    case 0XFD6897:
       	digitalWrite(redPin,LOW);
    	digitalWrite(bluePin,HIGH);
    	digitalWrite(greenPin,HIGH);
  		break;
  }
  
  delay(1500);
  IR.resume();
}


/*
FD00FF - POW
FD40BF - OFF
FD08F7 - 1
FD8877 - 2
FD48B7 - 3
FD28D7 - 4
FDA857 - 5
FD6897 - 6
FD18E7 - 7
FD9867 - 8
FD58A7 - 9

*/