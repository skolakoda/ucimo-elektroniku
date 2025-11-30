#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0;
const int mosfetPin = 6;

const int limit = 50;
const unsigned long trajanje = 3600000UL;

bool svetloUkljuceno = false;
bool vecSvetlelo = false;
unsigned long vremePaljenja = 0;

void spavaj8sek() {
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  sleep_enable();
  wdt_enable(WDTO_8S);
  wdt_reset();
  sleep_cpu();
  sleep_disable();
  wdt_disable();
}

void setup() {
  pinMode(mosfetPin, OUTPUT);
  digitalWrite(mosfetPin, LOW);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  int value = analogRead(fotootpornik);
  bool jeMrak = value < limit;
  bool jeDan = value > limit + 20;

  if (jeDan) {
    vecSvetlelo = false;
  }

  if (jeMrak && !svetloUkljuceno && !vecSvetlelo) {
    digitalWrite(mosfetPin, HIGH);
    svetloUkljuceno = true;
    vecSvetlelo = true;
    vremePaljenja = millis();
  }

  if (svetloUkljuceno && millis() - vremePaljenja >= trajanje) {
    digitalWrite(mosfetPin, LOW);
    svetloUkljuceno = false;
  }

  spavaj8sek();
}
