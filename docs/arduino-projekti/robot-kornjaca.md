# Robot kornjača

Radi na daljinac.

## Kompletan primer

```c
#include <IRremote.h> // onesposobljava neke pinove?

int infraRedPin = 2; // braon

int IN1 = 4;  // plavi
int IN2 = 7;  // zeleni
int IN3 = 12; // beli
int IN4 = 13; // sivi

int ENA = 5;  // ljubičasti (PWM speed regulation)
int ENB = 10; // narandžasti (PWM speed regulation)

int trigPin = 8; // braon
int echoPin = 9; // zuti

const long forwardBtn = 0xFF18E7;   // 2
const long forwardAlt = 0x3D9AE3F7; // 2
const long backBtn = 0xFF4AB5;      // 8
const long backAlt = 0x1BC0157B;    // 8
const long stopBtn = 0xFF38C7;      // 5
const long stopAlt = 0x488F3CBB;    // 5
const long leftBtn = 0xFF10EF;      // 4
const long leftAlt = 0x8C22657B;    // 4
const long rightBtn = 0xFF5AA5;     // 6
const long rightAlt = 0x449E79F;    // 6
const long repeatedBtn = 0xffffffff;

IRrecv irrecv(infraRedPin);
decode_results results;

unsigned long lastClick = 0;
long currButton = stopBtn;

void setup()
{
    pinMode(infraRedPin, INPUT);

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENB, OUTPUT);

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);

    lastClick = millis();
    Serial.begin(9600);
    irrecv.enableIRIn(); // Start the receiver // ubija motore!
}

void loop()
{
    if (rastojanje() < 10 && millis() - lastClick > 500)
    {
        stop();
    }

    if ((currButton == leftBtn || currButton == rightBtn) && (millis() - lastClick > 1000))
    {
        stop();
    }

    if (irrecv.decode(&results))
    {
        // if 1/4 second since lastClick IR received, print
        if (millis() - lastClick > 250)
        {
            Serial.println(currButton, HEX);
        }

        lastClick = millis();

        if (results.value != repeatedBtn)
            currButton = results.value;

        switch (currButton)
        {
        case forwardBtn:
        case forwardAlt:
            forward();
            break;
        case backBtn:
        case backAlt:
            back();
            break;
        case leftBtn:
        case leftAlt:
            left();
            break;
        case rightBtn:
        case rightAlt:
            right();
            break;
        case stopBtn:
        case stopAlt:
            stop();
            break;
        default:
            break;
        }

        irrecv.resume(); // receive next value
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
```