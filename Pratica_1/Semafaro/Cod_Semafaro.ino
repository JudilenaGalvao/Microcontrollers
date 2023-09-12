int ledRed = 12;
int ledYellow = 11;
int ledGreen = 10;


void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop()
{
  digitalWrite(ledRed, HIGH);
  delay(10000); 
  digitalWrite(ledRed, LOW);
  
  digitalWrite(ledGreen, HIGH);
  delay(10000); 
  digitalWrite(ledGreen, LOW);
  
  digitalWrite(ledYellow, HIGH);
  delay(2000); 
  digitalWrite(ledYellow, LOW);
}