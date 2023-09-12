const byte pot = A0;
int valorLido;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valorLido = analogRead(pot);
  Serial.println(valorLido);
}