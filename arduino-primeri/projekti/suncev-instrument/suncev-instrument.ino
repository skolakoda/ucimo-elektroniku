byte fotootpornik = A0;
byte zvucnik = 5; // plus zvučnika
int echoPin = 7;
int trigPin = 8;

byte granicaTame = 20;
byte najdubljiZvuk = 31;
int najvisiZvuk = 4978;
long duration, cm;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  int svetlost = analogRead(fotootpornik);
  // TODO: promenljivo trajanje
  int trajanje = 1000 / 8;
  Serial.print("fotootpornik : ");
  Serial.println(svetlost);
  delay(trajanje);

  if (svetlost < granicaTame) return;
  int visina = map(svetlost, granicaTame, 1023, najdubljiZvuk, najvisiZvuk);
  tone(zvucnik, visina, trajanje);
}
