#include <avr/sleep.h>
#include <avr/wdt.h>

#define FOTOOTPORNIK A0
#define MOSFET_PIN 6
#define SOUND_PIN 2

const int granicaMraka = 6;
const int granicaSvetla = 11;
const unsigned long trajanjeSvetla = 30 * 60000UL; // minuta

volatile bool pljesnuto = false;
unsigned long vremePaljenja = 0;
unsigned long poslednjiPljesak = 0;
bool biloUgaseno = false;
bool noviDan = true; 
bool jeMrak = false;

ISR(WDT_vect) {} // gazi default, omogućava buđenje bez reseta

void hendlajPljesak() {
  unsigned long sada = millis();
  if (sada - poslednjiPljesak > 200) { // debounce
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

bool vremeIsteklo() {
  return millis() - vremePaljenja >= trajanjeSvetla;
}

void setup() {
  pinMode(MOSFET_PIN, OUTPUT);
  digitalWrite(MOSFET_PIN, LOW);

  pinMode(SOUND_PIN, INPUT);
  attachInterrupt(digitalPinToInterrupt(SOUND_PIN), hendlajPljesak, RISING);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {

  if (!pljesnuto) {
    int vrednost = analogRead(FOTOOTPORNIK);
    if (jeMrak && vrednost > granicaSvetla) jeMrak = false; // histereza (favorizuje prethodno stanje)
    if (!jeMrak && vrednost < granicaMraka) jeMrak = true; 

    if (jeMrak) {
      if (!upaljeno() && !biloUgaseno) {
        prekidac(true);
      } else if (upaljeno() && vremeIsteklo()) {
        prekidac(false);
      }
      noviDan = true;
    } 

    if (!jeMrak) {
      if (upaljeno() && (noviDan || vremeIsteklo())) {
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

  digitalWrite(MOSFET_PIN, upaljeno());
  spavaj();
}
