#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0;
const int mosfetPin = 6;

const int limit = 20;
const unsigned long trajanje = 3600000UL;

bool svetli = false;
unsigned long vremePaljenja = 0;

ISR(WDT_vect) {} // prepisuje podrazumevanu ISR koja pravi probleme

void spavaj() {
  // SLEEP_MODE_PWR_DOWN više štedi, ali sijalice trepću dok svetle
  set_sleep_mode(svetli ? SLEEP_MODE_IDLE : SLEEP_MODE_PWR_DOWN); 
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

  if (jeMrak && !svetli) {
    digitalWrite(mosfetPin, HIGH);
    svetli = true;
    vremePaljenja = millis();
  }

  if (!jeMrak && svetli) {
    digitalWrite(mosfetPin, LOW);
    svetli = false;
  }

  if (svetli && millis() - vremePaljenja >= trajanje) {
    digitalWrite(mosfetPin, LOW);
    svetli = false;
  }

  spavaj();
}
