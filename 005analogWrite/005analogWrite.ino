int pin = 9;
int brightness=100;
void setup()
{
  pinMode(pin, OUTPUT);
}

void loop()
{
  analogWrite(pin,brightness);
}