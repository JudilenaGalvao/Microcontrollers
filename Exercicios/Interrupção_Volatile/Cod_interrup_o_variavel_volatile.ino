const byte led = 13;
volatile boolean rapido = false;

void setup()
{
  pinMode(led, OUTPUT);
  attachInterrupt(0,algoAconteceu, RISING);// CAPITURA UMA SUBIDA
  //attachInterrupt(0,algoAconteceu, FALLING);// CAPITURA UMA QUEDA
  //attachInterrupt(0,algoAconteceu, CHANGE);// CAPITURA QUALQUER UMA 
}

void loop()
{
	int periodo = 1000;
  	if(rapido)
		periodo = 100;
  	digitalWrite(led,HIGH);
  	delay(periodo);
  	digitalWrite(led,LOW);
  	delay(periodo);
}

void algoAconteceu(){
 	rapido = !rapido;
}