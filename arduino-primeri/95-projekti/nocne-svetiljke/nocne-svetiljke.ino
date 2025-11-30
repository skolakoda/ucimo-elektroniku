const int fotootpornik = A0;
const int ledPin = LED_BUILTIN;
const int mosfetPin = 6;

const int limit = 50;
const unsigned long trajanje = 7200000UL; // 2 časa

bool svetloUkljuceno = false;
bool vecSvetlelo = false;
unsigned long vremePaljenja = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(mosfetPin, OUTPUT);
}

void loop() {
  int value = analogRead(fotootpornik);
  bool jeMrak = value < limit;
  bool jeDan = value > limit + 20;

  if (jeDan) {
    vecSvetlelo = false;
  }

  if (jeMrak && !svetloUkljuceno && !vecSvetlelo) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(mosfetPin, HIGH);
    svetloUkljuceno = true;
    vecSvetlelo = true;
    vremePaljenja = millis();
  }

  if (svetloUkljuceno && millis() - vremePaljenja >= trajanje) {
    digitalWrite(ledPin, LOW);
    digitalWrite(mosfetPin, LOW);
    svetloUkljuceno = false;
  }

  delay(250);
}
