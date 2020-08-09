//Autora: Pamela Fialho
//Data: 29/07/2020
//Função: utilizar uma fileira de leds na vertical para escrever "fora bozo", quando a mesma é movimentada na horizontal

int ledDelay;
int ledPin[] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
int potPin = 2;

void setup() {
  for (int x=0; x<9; x++) { // define todos os pinos como saída
    pinMode(ledPin[x], OUTPUT);
  }
}

void loop() {
  ledDelay = 2 * analogRead(potPin);
  f();o();r();a();space();b();o();z();o();space();
}

void space() {
  for (int x=0; x<9; x++) { // todos os leds apagados
    digitalWrite(ledPin[x], LOW);
  }
  delay(ledDelay);
}

void f() {
  for (int x=0; x<9; x++) { // todos os leds acesos
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
  for (int x=0; x<5; x++) {
    digitalWrite(ledPin[1], HIGH);
    digitalWrite(ledPin[2], LOW);
    digitalWrite(ledPin[3], LOW);
    digitalWrite(ledPin[4], HIGH);
    digitalWrite(ledPin[5], LOW);
    digitalWrite(ledPin[6], LOW);
    digitalWrite(ledPin[7], LOW);
    digitalWrite(ledPin[8], LOW);
    delay(ledDelay);
  }
}

void o() {
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
  for (int x=0; x<4; x++) {
    digitalWrite(ledPin[1], HIGH);
    digitalWrite(ledPin[2], LOW);
    digitalWrite(ledPin[3], LOW);
    digitalWrite(ledPin[4], LOW);
    digitalWrite(ledPin[5], LOW);
    digitalWrite(ledPin[6], LOW);
    digitalWrite(ledPin[7], LOW);
    digitalWrite(ledPin[8], HIGH);
    delay(ledDelay);
  }
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
}

void r() {
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], HIGH);
  digitalWrite(ledPin[5], HIGH);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], LOW);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], HIGH);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], HIGH);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], LOW);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], HIGH);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], HIGH);
  digitalWrite(ledPin[8], LOW);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], HIGH);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
}

void a() {
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
  for (int x=0; x<4; x++) {
    digitalWrite(ledPin[1], HIGH);
    digitalWrite(ledPin[2], LOW);
    digitalWrite(ledPin[3], LOW);
    digitalWrite(ledPin[4], HIGH);
    digitalWrite(ledPin[5], LOW);
    digitalWrite(ledPin[6], LOW);
    digitalWrite(ledPin[7], LOW);
    digitalWrite(ledPin[8], LOW);
    delay(ledDelay);
  }
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
}

void b() {
  for (int x=0; x<9; x++) {
    digitalWrite(ledPin[x], HIGH);
  }
  delay(ledDelay);
  for (int x=0; x<4; x++) {
    digitalWrite(ledPin[1], HIGH);
    digitalWrite(ledPin[2], LOW);
    digitalWrite(ledPin[3], LOW);
    digitalWrite(ledPin[4], HIGH);
    digitalWrite(ledPin[5], LOW);
    digitalWrite(ledPin[6], LOW);
    digitalWrite(ledPin[7], LOW);
    digitalWrite(ledPin[8], HIGH);
    delay(ledDelay);
  }
  digitalWrite(ledPin[1], LOW);
  digitalWrite(ledPin[2], HIGH);
  digitalWrite(ledPin[3], HIGH);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], HIGH);
  digitalWrite(ledPin[6], HIGH);
  digitalWrite(ledPin[7], HIGH);
  digitalWrite(ledPin[8], LOW);
  delay(ledDelay);
}

void z() {
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], HIGH);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], HIGH);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], HIGH);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay);
  digitalWrite(ledPin[1], HIGH);
  digitalWrite(ledPin[2], LOW);
  digitalWrite(ledPin[3], LOW);
  digitalWrite(ledPin[4], LOW);
  digitalWrite(ledPin[5], LOW);
  digitalWrite(ledPin[6], LOW);
  digitalWrite(ledPin[7], LOW);
  digitalWrite(ledPin[8], HIGH);
  delay(ledDelay); 
}
