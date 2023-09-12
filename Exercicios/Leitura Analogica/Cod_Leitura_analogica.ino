const byte led = 10;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i = 0; i <= 255; i++){
    analogWrite(led, i);
    delay(15);
  }
}