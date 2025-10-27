#include <Servo.h>

const byte TRIGGER_PIN = 8;  // beli
const byte ECHO_PIN = 7;     // sivi
const byte SERVO_PIN = 9;    // servo
const byte MICROPHONE_PIN = A0;  // pin 14

const byte MOTOR1_LEVI = 3;   // zeleni
const byte MOTOR1_DESNI = 11; // plavi
const byte MOTOR2_LEVI = 6;   // sivi
const byte MOTOR2_DESNI = 5;  // roze

Servo servo;

const byte BRZINA_MOTORA = 150; // 0-255
const int POKRET_TRAJANJE = 300; // ms
const int PREBLIZU = 20;        // cm

int zvuk = 0;
const int PRAG_ZVUKA = 600;
const int MIN_INTERVAL = 200;
unsigned long lastBeatTime = 0;

void setup() {
  Serial.begin(9600);

  pinMode(MOTOR1_LEVI, OUTPUT);
  pinMode(MOTOR1_DESNI, OUTPUT);
  pinMode(MOTOR2_LEVI, OUTPUT);
  pinMode(MOTOR2_DESNI, OUTPUT);
  pinMode(MICROPHONE_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  servo.attach(SERVO_PIN);
  servo.write(90);
}

/* POKRETI */

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

unsigned int rastojanje() {
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);
  
  unsigned int vreme = pulseIn(ECHO_PIN, HIGH);
  return (vreme * 0.034) / 2;
}

void vrtiGlavu() {
  static bool levoDesno = true;
  if (levoDesno) {
    servo.write(60);  // levo
  } else {
    servo.write(120); // desno
  }
  levoDesno = !levoDesno;   // menja smer
}

void plesiRitam() {
  if (rastojanje() < PREBLIZU) {
    nazad(200);
    stani(100);
    return;
  }

  vrtiGlavu();
  napred(BRZINA_MOTORA);
  delay(POKRET_TRAJANJE);
}

/* LOOP */

void loop() {
  zvuk = analogRead(MICROPHONE_PIN);

  if (zvuk > PRAG_ZVUKA && millis() - lastBeatTime > MIN_INTERVAL) {
    lastBeatTime = millis();
    plesiRitam();
  }

  delay(10);
}
