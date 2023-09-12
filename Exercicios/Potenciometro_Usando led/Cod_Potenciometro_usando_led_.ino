const byte pot = A0;
const byte led = 11;
int sensorValue = 0; // leitura do potenciômetro
byte outputValue = 0; // saida PWM (analógica)

void setup() {
pinMode(led, OUTPUT);
// inicializa a comunicação serial
Serial.begin(9600);
}

void loop() {
// faz a leitura da entrada analógica
sensorValue = analogRead(pot);
// mapeia o resultado da entrada analógica dentro do intervalo de 0 a 255
outputValue = map(sensorValue, 0, 1023, 0, 255);
// escreve o valor de saída (“analógico”)
analogWrite(led, outputValue);
// imprime o resultado no monitor serial:
Serial.print("sensor = " );
Serial.print(sensorValue);
Serial.print("\t output = ");
Serial.println(outputValue);
// Aguarda 2 milissegundos antes do próximo loop:
delay(2);
}