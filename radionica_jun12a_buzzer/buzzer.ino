
int detektor = 10;
int buzzer = 9;
boolean detektovan= LOW;

void setup() {
  pinMode(detektor, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int val = digitalRead(detektor);
  if (val) {
    detektovan = HIGH;
  }
  if (detektovan) {
    tone(buzzer, 500);
  }
}
