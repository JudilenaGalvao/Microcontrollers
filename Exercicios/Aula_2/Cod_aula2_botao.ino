const byte botao = 2;
const byte led = 8;
boolean estadobotao;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{	
  estadobotao = digitalRead(botao);
  
  switch(estadobotao){
    
    case 1: digitalWrite(led, HIGH);
    	break;
    
    case 0: digitalWrite(led, LOW);
    	break;
}
}