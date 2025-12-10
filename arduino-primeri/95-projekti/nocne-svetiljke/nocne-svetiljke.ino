#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0; // žuti
const int mosfetPin = 6;     // narandžasti
const int soundPin = 2;      // žuti

const int granicaMraka = 20;
const unsigned long trajanjeSvetla = 3600000UL; // 1 čas
const unsigned long trajanjePljeska = 300000UL; // 5 min
const unsigned long debounce = 200; 

bool svetli = false;
volatile bool pljesnuto = false;
volatile unsigned long poslednjiPljesak = 0;
unsigned long pocetakSvetla = 0;

ISR(WDT_vect) {} // gazi default reset, omogućava buđenje bez reseta

void hendlajPljesak() {
  if (millis() - poslednjiPljesak > debounce) {
    pljesnuto = !pljesnuto;
    poslednjiPljesak = millis();
  }
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

void promeniSvetlo(bool ukljuciti) {
  svetli = ukljuciti;
  if (ukljuciti) {
    pocetakSvetla = millis();
  }
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
  bool jeMrak = analogRead(fotootpornik) < granicaMraka;

  if (jeMrak && !svetli) {
    promeniSvetlo(true);
  }

  if (svetli && !jeMrak || (svetli && millis() - pocetakSvetla >= trajanjeSvetla)) {
    promeniSvetlo(false);
  }

  if (pljesnuto) {
    promeniSvetlo(!svetli);
    if (millis() - poslednjiPljesak >= trajanjePljeska) {
      pljesnuto = false;
    }
  }

  digitalWrite(mosfetPin, svetli);
  spavaj();
}
