const byte pot = A0;
const byte led = 11;
int tempo = 0;

void setup() {
  
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  
    tempo = analogRead(pot);
    digitalWrite(led, HIGH);
    delay(tempo);
    digitalWrite(led, LOW);
    delay(tempo);
    Serial.println(tempo);
  
}