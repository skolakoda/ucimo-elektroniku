int motor1levi = 9;
int motor1desni = 10;
int motor2levi = 6;
int motor2desni = 5;

int echoPin = 7;
int trigPin = 8;

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
    int cm = rastojanje();
    int brzina = map(cm, 2, 200, 100, 255);
    if (cm < 20)
    {
        // skreni();
        brzina = 0;
    }
    idi(brzina);
}
