int motor1desni = 10; // plavi
int motor1levi = 9; // zeleni
int trigPin = 8; // beli
int echoPin = 7; // sivi senzor
int motor2levi = 6; // sivi motor
int motor2desni = 5; // roze

void setup()
{
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
    return (vreme * 0.034) / 2;
}

void idi(int speed)
{
    analogWrite(motor1levi, 0);
    analogWrite(motor1desni, speed);
    analogWrite(motor2levi, 0);
    analogWrite(motor2desni, speed);
}

void loop()
{
    int cm = rastojanje();
    int brzina = map(cm, 2, 200, 100, 255);
    if (cm < 20)
    {
        brzina = 0;
    }
    idi(brzina);
}
