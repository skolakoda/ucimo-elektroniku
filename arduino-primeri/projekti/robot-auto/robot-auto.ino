// Servo library disables analogWrite() (PWM) functionality on pins 9 and 10!
#include <Servo.h>

byte trigPin = 8; // beli
byte echoPin = 7; // sivi senzor
byte servoPin = 9;

byte motor1desni = 11; // plavi
byte motor1levi = 3;   // zeleni
byte motor2levi = 6;   // sivi motor
byte motor2desni = 5;  // roze

Servo servo;

const byte NUM_ANGLES = 7;
byte uglovi[NUM_ANGLES] = {0, 30, 60, 90, 120, 150, 180};
unsigned int rastojanja[NUM_ANGLES];

unsigned int rastojanje()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    unsigned int vreme = pulseIn(echoPin, HIGH); // da ode i da se vrati
    return (vreme * 0.034) / 2;                  // to cm
}

void pogledajDesnoLevo()
{
    servo.write(0);
    delay(500);
    for (byte i = 0; i < NUM_ANGLES; i++)
    {
        rastojanja[i] = rastojanje();
        servo.write(uglovi[i]);
        delay(120);
    }
    servo.write(90);
    delay(500);
}

void setup()
{
    Serial.begin(9600);
    pinMode(motor1levi, OUTPUT);
    pinMode(motor1desni, OUTPUT);
    pinMode(motor2levi, OUTPUT);
    pinMode(motor2desni, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    servo.attach(servoPin);
    pogledajDesnoLevo();
}

void idi(byte brzina, bool napred)
{
    analogWrite(motor1levi, napred ? 0 : brzina);
    analogWrite(motor1desni, napred ? brzina : 0);
    analogWrite(motor2levi, napred ? 0 : brzina);
    analogWrite(motor2desni, napred ? brzina : 0);
}

void napred(byte brzina)
{
    idi(brzina, true);
}

void nazad(int trajanje)
{
    byte brzina = 80;
    idi(brzina, false);
    delay(trajanje);
}

void stani(int trajanje)
{
    idi(0, true);
    delay(trajanje);
}

void skreni(int trajanje, bool levo)
{
    byte brzina = 120;
    analogWrite(motor1levi, levo ? brzina : 0);
    analogWrite(motor1desni, levo ? 0 : brzina);
    analogWrite(motor2levi, levo ? 0 : brzina);
    analogWrite(motor2desni, levo ? brzina : 0);
    delay(trajanje);
}

byte nadjiNajdalji()
{
    byte nadjenIndex = 0;
    unsigned int najdalje = rastojanja[0];
    for (byte i = 0; i < NUM_ANGLES; i++)
    {
        if (rastojanja[i] > najdalje)
        {
            najdalje = rastojanja[i];
            nadjenIndex = i;
        }
    }
    return nadjenIndex;
}

void loop()
{
    if (rastojanje() < 20)
    {
        stani(500);
        nazad(300);
        stani(0);
        pogledajDesnoLevo();
        skreni(500, nadjiNajdalji() > 3);
        stani(500);
    }
    else
    {
        napred(255);
    }
}