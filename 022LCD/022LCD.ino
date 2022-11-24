#include <LiquidCrystal.h>

int rs = 7;
int en = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup()
{
  lcd.begin(16,2);
  
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Watch me count");
  delay(1000);
  for(int j=1;j<=10;j++){
  	lcd.setCursor(0,1);
  	lcd.print(j);
  	delay(500);
  }
  lcd.clear();
}