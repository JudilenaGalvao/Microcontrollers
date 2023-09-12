const byte btn = 2;
boolean estadoBotao;

void setup()
{
  pinMode(btn, INPUT);
  Serial.begin(9600);
}

void loop()
{
  estadoBotao = digitalRead(btn);
  Serial.println(estadoBotao);
  delay(100);
}