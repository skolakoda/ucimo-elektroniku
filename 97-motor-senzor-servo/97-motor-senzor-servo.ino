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

#define NUM_ANGLES 7
unsigned char sensorAngle[NUM_ANGLES] = {60, 70, 80, 90, 100, 110, 120};
unsigned int distance[NUM_ANGLES];

unsigned int readDistance()
{
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    unsigned long period = pulseIn(echoPin, HIGH);
    return period * 343 / 2000; // to millimeters
}

void readNextDistance()
{
    static unsigned char angleIndex = 0;
    static signed char step = 1;
    distance[angleIndex] = readDistance();
    Serial.println(distance[angleIndex]);
    angleIndex += step;
    if (angleIndex == NUM_ANGLES - 1)
        step = -1;
    else if (angleIndex == 0)
        step = 1;
    myservo.write(sensorAngle[angleIndex]);
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
    // myservo.write(90);
    myservo.write(sensorAngle[0]);
    delay(200);
    for (unsigned char i = 0; i < NUM_ANGLES; i++)
        readNextDistance(), delay(200);
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
    analogWrite(motor1levi, 120);
    analogWrite(motor1desni, 0);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, 120);
}

void loop()
{
    readNextDistance();
    // See if something is too close at any angle
    unsigned char tooClose = 0;
    for (unsigned char i = 0; i < NUM_ANGLES; i++)
        if (distance[i] < 300)
        {
            tooClose = 1;
        }
    if (tooClose)
    {
        Serial.println("back up left");
        skreni(); // proveri jel skreće levo
    }
    else
    {
        Serial.println("go forward");
        idi(255);
    }
    // Check the next direction in 50 ms
    delay(50);
}