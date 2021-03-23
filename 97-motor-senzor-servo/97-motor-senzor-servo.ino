// Servo library disables analogWrite() (PWM) functionality on pins 9 and 10!
#include <Servo.h>

int servoPin = 9;

int trigPin = 8; // beli
int echoPin = 7; // sivi senzor

int motor1desni = 11; // plavi
int motor1levi = 3;   // zeleni
int motor2levi = 6;   // sivi motor
int motor2desni = 5;  // roze

Servo myservo;

const int NUM_ANGLES = 13;
unsigned char uglovi[NUM_ANGLES] = {0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180};
unsigned int rastojanja[NUM_ANGLES];

unsigned int rastojanje()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    unsigned int vreme = pulseIn(echoPin, HIGH); // da ode i da se vrati
    return (vreme / 2) / 29.1;                   // to cm
}

void pogledajOkolo()
{
    myservo.write(0);
    delay(500);
    for (unsigned char i = 0; i < NUM_ANGLES; i++)
    {
        rastojanja[i] = rastojanje();
        Serial.println(rastojanja[i]);
        myservo.write(uglovi[i]);
        delay(120);
    }
    myservo.write(90);
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
    myservo.attach(servoPin);
    pogledajOkolo();
}

void idi(int brzina, bool napred)
{
    analogWrite(motor1levi, napred ? 0 : brzina);
    analogWrite(motor1desni, napred ? brzina : 0);
    analogWrite(motor2levi, napred ? 0 : brzina);
    analogWrite(motor2desni, napred ? brzina : 0);
}

void napred(int brzina)
{
    idi(brzina, true);
}

void nazad(int trajanje)
{
    int brzina = 80;
    idi(brzina, false);
    delay(trajanje);
}

void stani(int trajanje)
{
    idi(0, true);
    delay(trajanje);
}

// TODO: skreni levo, desno
// trenutno skreće levo
void skreni(int trajanje)
{
    int brzina = 80;
    analogWrite(motor1levi, brzina);
    analogWrite(motor1desni, 0);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, brzina);
    delay(trajanje);
}

void loop()
{
    int cm = rastojanje();
    if (cm < 20)
    {
        stani(500);
        nazad(500);
        stani(0);
        pogledajOkolo();
        // TODO: gde ima mesta tu skreni
        skreni(500);
        stani(500);
    }
    else
    {
        int brzina = map(cm, 2, 200, 80, 255);
        napred(brzina);
    }
}