// Servo library disables analogWrite() (PWM) functionality on pins 9 and 10!
#include <Servo.h>

const byte TRIGGER_PIN = 8;  // beli
const byte ECHO_PIN = 7;     // sivi
const byte SERVO_PIN = 9;    // servo

const byte MOTOR1_LEVI = 3;   // zeleni
const byte MOTOR1_DESNI = 11; // plavi
const byte MOTOR2_LEVI = 6;   // sivi
const byte MOTOR2_DESNI = 5;  // roze

Servo servo;

const byte BROJ_UGLOVA = 7;
const byte PRAV_UGAO = 75;
const byte UGLOVI[BROJ_UGLOVA] = {PRAV_UGAO - 90, PRAV_UGAO - 60, PRAV_UGAO - 30, PRAV_UGAO, PRAV_UGAO + 30, PRAV_UGAO + 60, PRAV_UGAO + 90};
unsigned int rastojanja[BROJ_UGLOVA];

const byte BRZINA = 128; // 0-255 jačina signala
const byte BRZINA_RIKVERC = BRZINA_RIKVERC / 3;
const byte BRZINA_SKRETANJA = BRZINA / 2;
const unsigned int PREBLIZU = 20;     // cm
const unsigned int CEKAJ_SERVO = 120; // ms
const unsigned int PREDAH = 500;      // ms

unsigned int rastojanje() {
    digitalWrite(TRIGGER_PIN, LOW);
    delayMicroseconds(5);
    digitalWrite(TRIGGER_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIGGER_PIN, LOW);
    
    unsigned int vreme = pulseIn(ECHO_PIN, HIGH);  // da ode i da se vrati
    return (vreme * 0.034) / 2;                    // to cm
}

void pogledajDesnoLevo() {
    for (byte i = 0; i < BROJ_UGLOVA; i++) {
        servo.write(UGLOVI[i]);
        delay(CEKAJ_SERVO);            // čekaj da servo stigne
        rastojanja[i] = rastojanje();  // meri
    }
    servo.write(PRAV_UGAO);            // vrati u sredinu
    delay(CEKAJ_SERVO);
}

void idi(byte brzina, bool napred) {
    analogWrite(MOTOR1_LEVI, napred ? 0 : brzina);
    analogWrite(MOTOR1_DESNI, napred ? brzina : 0);
    analogWrite(MOTOR2_LEVI, napred ? 0 : brzina);
    analogWrite(MOTOR2_DESNI, napred ? brzina : 0);
}

void napred(byte brzina) 
{ 
    idi(brzina, true); 
}

void nazad(unsigned int trajanje) 
{ 
    idi(BRZINA_RIKVERC, false); 
    delay(trajanje); 
}

void stani(unsigned int trajanje) 
{ 
    idi(0, true); 
    delay(trajanje); 
}

void skreni(unsigned int trajanje, bool levo) {
    analogWrite(MOTOR1_LEVI, levo ? BRZINA_SKRETANJA : 0);
    analogWrite(MOTOR1_DESNI, levo ? 0 : BRZINA_SKRETANJA);
    analogWrite(MOTOR2_LEVI, levo ? 0 : BRZINA_SKRETANJA);
    analogWrite(MOTOR2_DESNI, levo ? BRZINA_SKRETANJA : 0);
    delay(trajanje);
}

byte nadjiNajdalji() {
    byte nadjenIndex = 0;
    unsigned int najdalje = rastojanja[0];
    for (byte i = 1; i < BROJ_UGLOVA; i++) {
        if (rastojanja[i] > najdalje) {
            najdalje = rastojanja[i];
            nadjenIndex = i;
        }
    }
    return nadjenIndex;
}

void setup() {
    Serial.begin(9600);
    pinMode(MOTOR1_LEVI, OUTPUT);
    pinMode(MOTOR1_DESNI, OUTPUT);
    pinMode(MOTOR2_LEVI, OUTPUT);
    pinMode(MOTOR2_DESNI, OUTPUT);
    pinMode(TRIGGER_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    servo.attach(SERVO_PIN);
    pogledajDesnoLevo();
}

void loop() {
    if (rastojanje() < PREBLIZU) {
        stani(PREDAH);
        nazad(PREDAH);
        stani(0);
        pogledajDesnoLevo();
        skreni(PREDAH, nadjiNajdalji() > BROJ_UGLOVA / 2);
        stani(PREDAH);
    } else {
        napred(BRZINA);
    }
}
