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

void readNextDistance()
{
    static unsigned char index = 0;
    static signed char step = 1;
    rastojanja[index] = rastojanje();
    Serial.println(rastojanja[index]);
    index += step;
    if (index == NUM_ANGLES - 1)
        step = -1;
    else if (index == 0)
        step = 1;
    myservo.write(uglovi[index]);
}

void pogledajOkolo()
{
    for (unsigned char i = 0; i < NUM_ANGLES; i++)
    {
        readNextDistance();
        delay(150);
    }
    myservo.write(90);
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

void idi(int speed)
{
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, speed);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, speed);
}

// TODO: skreni levo, desno
void skreni()
{
    analogWrite(motor1levi, 120);
    analogWrite(motor1desni, 0);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, 120);
}

void loop()
{
    int cm = rastojanje();
    int brzina = map(cm, 2, 200, 80, 255);
    if (cm < 20)
    {
        brzina = 0;
    }
    idi(brzina);
}