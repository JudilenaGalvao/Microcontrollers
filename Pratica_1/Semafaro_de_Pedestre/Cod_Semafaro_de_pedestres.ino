int ledRed = 12;
int ledYellow = 11;
int ledGreen = 10;
int ledPedRed = 9;
int ledPedGreen = 8;
int botao = 2;
boolean estadobotao;


void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledPedRed, OUTPUT);
  pinMode(ledPedGreen, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  estadobotao = digitalRead(botao);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledPedRed, HIGH);
  
  
  
  if(estadobotao){
    delay(3000);
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledYellow, HIGH);
    delay(2000);
    
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledPedRed, LOW);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledPedGreen, HIGH);
    delay(10000);
    
    
    for(int i=0;i<10;i++){
      digitalWrite(ledPedGreen, HIGH);	
      delay(500);
      digitalWrite(ledPedGreen, LOW);
      delay(500);
    }
    digitalWrite(ledRed, LOW);
  }
}

