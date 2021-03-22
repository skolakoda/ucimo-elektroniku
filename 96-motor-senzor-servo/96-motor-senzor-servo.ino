// Servo library disables analogWrite() (PWM) functionality on pins 9 and 10!
#include <Servo.h>

int servoPin = 9;

int trigPin = 8;      // beli
int echoPin = 7;      // sivi senzor

int motor1desni = 11; // plavi
int motor1levi = 3;   // zeleni
int motor2levi = 6;   // sivi motor
int motor2desni = 5;  // roze

Servo myservo;

void setup()
{
    myservo.attach(servoPin);
    myservo.write(90);
    pinMode(motor1levi, OUTPUT);
    pinMode(motor1desni, OUTPUT);
    pinMode(motor2levi, OUTPUT);
    pinMode(motor2desni, OUTPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

int rastojanje()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    int vreme = pulseIn(echoPin, HIGH); // da ode i da se vrati
    return (vreme / 2) / 29.1;
}

void idi(int speed)
{
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, speed);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, speed);
}

void skreni()
{
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, 120);
    analogWrite(motor2levi, 120);
    analogWrite(motor2desni, 0);
}

void loop()
{
    for (int pos = 0; pos <= 180; pos += 1)
    {
        myservo.write(pos); // tell servo to go to pos
        delay(15);          // waits 15ms for the servo to reach the position
    }
    for (int pos = 180; pos >= 0; pos -= 1)
    {
        myservo.write(pos);
        delay(15);
    }

    int cm = rastojanje();
    int brzina = map(cm, 2, 200, 100, 255);
    if (cm < 20)
    {
        brzina = 0;
    }
    idi(brzina);
}
