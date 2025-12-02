#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0;
const int mosfetPin = 6;
const int soundPin = 2;

const int granicaSvetla = 20;
const unsigned long trajanje = 3600000UL;
unsigned long vremePaljenja = 0;
bool svetli = false;
volatile bool pljesnuto = false;

ISR(WDT_vect) {} 

void hendlajPljesak() {
  pljesnuto = !pljesnuto;
}

void spavaj() {
  set_sleep_mode(SLEEP_MODE_IDLE);
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

  pinMode(soundPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(soundPin), hendlajPljesak, RISING);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  bool jeMrak = analogRead(fotootpornik) < granicaSvetla;

  if (jeMrak && !svetli) {
    svetli = true;
    vremePaljenja = millis();
  }

  if (svetli && !jeMrak || (svetli && millis() - vremePaljenja >= trajanje)) {
    svetli = false;
  }

  if (pljesnuto) {
    svetli = !svetli;
  }

  digitalWrite(mosfetPin, svetli);

  spavaj();
}
