const byte leds[] = {9,10,11};
const byte ledDelay = 500;
byte direction = 1;
byte currentLed = 0;
unsigned long changeTime;

void setup() {
for(int i = 0; i <= 2;i++){ //laço de inicialização dos leds como saídas
pinMode(leds[i],OUTPUT);
}
changeTime = millis(); //retorna quantos ms desde que a execução começou
Serial.begin(9600);
Serial.println(changeTime);
}

void loop() {
if((millis() - changeTime) > ledDelay) {
changeLed();
changeTime = millis();
Serial.println(changeTime);
}
}

void changeLed() { //Função responsável por alterar o estado dos leds
for(int i = 0; i <= 2; i++){ //Apaga todos os leds
digitalWrite(leds[i],LOW);
}
digitalWrite(leds[currentLed], HIGH); //Acende apenas o led “da vez”
currentLed += direction;
if(currentLed == 2) { //Se o último led for alcançado, a direção deve mudar
direction = -1;
}
if(currentLed == 0) {//Se o primeiro led for alcançado, a direção deve mudar
direction = 1;
}
}