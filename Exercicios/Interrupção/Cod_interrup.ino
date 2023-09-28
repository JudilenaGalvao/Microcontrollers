const byte led = 13;

void setup()
{
  pinMode(led, OUTPUT);
  attachInterrupt(0,algoAconteceu, RISING);// CAPITURA UMA SUBIDA
  //attachInterrupt(0,algoAconteceu, FALLING);// CAPITURA UMA QUEDA
  //attachInterrupt(0,algoAconteceu, CHANGE);// CAPITURA QUALQUER UMA 
}

void loop()
{

}

void algoAconteceu(){
 	digitalWrite(led,HIGH); 
}