#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0; // žuti
const int mosfetPin = 6;     // narandžasti
const int soundPin = 2;      // žuti

const int granicaMraka = 20;
const unsigned long trajanjeSvetlaNocu  = 1800000UL; // 30 min
const unsigned long trajanjeSvetlaDanju = 180000UL; // 3 min

bool biloUgaseno = false;
unsigned long vremePaljenja = 0;
volatile bool pljesnuto = false;
unsigned long poslednjiPljesak = 0;
const unsigned long debouncePljeska = 200; // ms
bool noviDan = true; 

ISR(WDT_vect) {} // gazi default, omogućava buđenje bez reseta

void hendlajPljesak() {
  unsigned long sada = millis();
  if (sada - poslednjiPljesak > debouncePljeska) {
    pljesnuto = true;
    poslednjiPljesak = sada;
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

void prekidac(bool paljenje) {
  vremePaljenja = paljenje ? millis() : 0;
  if (!paljenje) biloUgaseno = true;
}

bool upaljeno() {
  return vremePaljenja != 0;
}

bool vremeIsteklo(bool mrak) {
  return millis() - vremePaljenja >= (mrak ? trajanjeSvetlaNocu : trajanjeSvetlaDanju);
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

  if (!pljesnuto) {
    bool jeMrak = analogRead(fotootpornik) < granicaMraka;

    if (jeMrak) {
      if (!upaljeno() && !biloUgaseno) {
        prekidac(true);
      } else if (upaljeno() && vremeIsteklo(jeMrak)) {
        prekidac(false);
      }
      noviDan = true;
    } 

    if (!jeMrak) {
      if (upaljeno() && (noviDan || vremeIsteklo(jeMrak))) {
        prekidac(false);
      }
      biloUgaseno = false; // reset za noć
      noviDan = false;
    }
  }

  if (pljesnuto) {
    prekidac(!upaljeno());
    pljesnuto = false;
  }

  digitalWrite(mosfetPin, upaljeno());
  spavaj();
}
