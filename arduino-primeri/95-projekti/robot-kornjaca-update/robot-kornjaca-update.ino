#include <IRremote.h> // verzija 4. onesposobljava neke pinove?

const byte IN1 = 4;  // plavi
const byte IN2 = 7;  // zeleni
const byte IN3 = 12; // beli
const byte IN4 = 13; // sivi

const byte ENA = 5;  // ljubičasti (desni motor - 5 radi)
const byte ENB = 10; // narandžasti (levi motor - 10 ne radi)

const byte IR_RECEIVE_PIN = 2; // braon
const byte trigPin = 8; // braon
const byte echoPin = 9; // zuti

const byte NUM_2 = 24;
const byte NUM_8 = 82;
const byte NUM_5 = 28;
const byte NUM_4 = 8;
const byte NUM_6 = 90;

unsigned long value = 0;

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

    Serial.begin(115200);
    IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
    if (rastojanje() < 10)
    {
        stop();
    }
   
    if (IrReceiver.decode())
    {        
        if (!(IrReceiver.decodedIRData.flags & IRDATA_FLAGS_IS_REPEAT))
        {
            value = IrReceiver.decodedIRData.command; // ažurira samo na novo pritiskanje
        }

        Serial.print("Command: ");
        Serial.println(IrReceiver.decodedIRData.command);
        Serial.print("value: ");
        Serial.println(value);

        switch (value)
        {
            case NUM_2: forward(); break;
            case NUM_8:    back(); break;
            case NUM_4:    left(); break;
            case NUM_6:   right(); break;
            case NUM_5:    stop(); break;
            default:       stop(); break;
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
