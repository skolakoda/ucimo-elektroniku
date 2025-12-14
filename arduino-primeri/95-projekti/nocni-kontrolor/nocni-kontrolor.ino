#include <avr/sleep.h>
#include <avr/wdt.h>

const int fotootpornik = A0; // žuti
const int mosfetPin = 6;     // narandžasti
const int soundPin = 2;      // žuti

const int granicaMraka = 20;
const unsigned long trajanjeSvetlaNocu  = 1800000UL; // 30 min
const unsigned long trajanjeSvetlaDanju = 180000UL; // 3 min

bool vecUgaseno = false;
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

void promeniSvetlo(bool upaliti) {
  vremePaljenja = upaliti ? millis() : 0;
}

bool svetiljkeUpaljene() {
  return vremePaljenja != 0;
}

bool istekloSvetlo(bool mrak) {
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
  bool mrak = analogRead(fotootpornik) < granicaMraka;

  /* NORMALAN TOK */

  if (!pljesnuto) {
    if (mrak) {
      if (!svetiljkeUpaljene() && !vecUgaseno) {
        promeniSvetlo(true);
      } else if (svetiljkeUpaljene() && istekloSvetlo(mrak)) {
        promeniSvetlo(false);
        vecUgaseno = true;
      }
      noviDan = true;
    } else { // dan
      if (svetiljkeUpaljene() && (noviDan || istekloSvetlo(mrak))) {
        promeniSvetlo(false);
      }
      vecUgaseno = false; // reset za novu noć
      noviDan = false;
    }
  }

  /* PLJESAK */

  if (pljesnuto) {
      if (svetiljkeUpaljene()) {
        promeniSvetlo(false);
        vecUgaseno = true;
      } else if (!svetiljkeUpaljene()) {
        promeniSvetlo(true);
      }
    pljesnuto = false;
  }

  digitalWrite(mosfetPin, svetiljkeUpaljene());
  spavaj();
}
