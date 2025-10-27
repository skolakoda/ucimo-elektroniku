#include <IRremote.h> // verzija 4; ne radi jedan motor

const byte IN1 = 4;  // plavi
const byte IN2 = 7;  // zeleni
const byte IN3 = 12; // beli
const byte IN4 = 13; // sivi

const byte ENA = 5;  // ljubičasti (desni motor - 5 radi)
const byte ENB = 10; // narandžasti (levi motor - 10 ne radi)

const byte IR_RECEIVE_PIN = 2; // braon
const byte trigPin = 8; // braon
const byte echoPin = 9; // zuti

const byte NUM_2 = 24; // gore
const byte NUM_8 = 82; // dole
const byte NUM_5 = 28; // sredina
const byte NUM_4 = 8;  // levo
const byte NUM_6 = 90; // desno

unsigned long lastClick = millis();
long currButton = NUM_5;

void setup()
{
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENB, OUTPUT);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    Serial.begin(9600);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
    if (rastojanje() < 10 && millis() - lastClick > 500)
    {
        stop();
    }

    if ((currButton == NUM_4 || currButton == NUM_6) && (millis() - lastClick > 1000))
    {
        stop();
    }

    if (IrReceiver.decode())
    {
        Serial.print("cmd="); Serial.print(IrReceiver.decodedIRData.command);
        lastClick = millis();

        currButton = IrReceiver.decodedIRData.command;

        switch (currButton)
        {
            case NUM_2: forward(); break;
            case NUM_8:    back(); break;
            case NUM_4:    left(); break;
            case NUM_6:   right(); break;
            case NUM_5:    stop(); break;
            default: break;
        }

        IrReceiver.resume(); // receive next value
    }
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

void forward()
{
    Serial.println("forward");
    analogWrite(ENA, 120);
    analogWrite(ENB, 120);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void back()
{
    Serial.println("back");
    analogWrite(ENA, 120);
    analogWrite(ENB, 120);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}

void left()
{
    Serial.println("left");
    analogWrite(ENA, 80);
    analogWrite(ENB, 80);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
}

void right()
{
    Serial.println("right");
    analogWrite(ENA, 80);
    analogWrite(ENB, 80);
    digitalWrite(IN4, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}

void stop()
{
    // Serial.println("stop");
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
}
