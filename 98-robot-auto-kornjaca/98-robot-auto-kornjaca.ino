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

const long forwardBtn = 0xFF18E7; // 2
const long backBtn = 0xFF4AB5;    // 8
const long stopBtn = 0xFF38C7;    // 5
const long leftBtn = 0xFF10EF;    // 4
const long rightBtn = 0xFF5AA5;   // 6
const long repeatedBtn = 0xffffffff;

IRrecv irrecv(infraRedPin);
decode_results results;

unsigned long lastClick = millis();
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

    Serial.begin(9600);
    irrecv.enableIRIn(); // Start the receiver // ubija motore!
}

void loop()
{
    // if (rastojanje() < 20)
    // {
    //     stop();
    // }

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
        
        if (results.value != repeatedBtn) currButton = results.value; // ignorise ffffffff

        switch (currButton)
        {
        case forwardBtn:
            forward();
            break;
        case backBtn:
            back();
            break;
        case leftBtn:
            left();
            break;
        case rightBtn:
            right();
            break;
        case stopBtn:
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
    analogWrite(ENA, 100);
    analogWrite(ENB, 100);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void back()
{
    Serial.println("back");
    analogWrite(ENA, 100);
    analogWrite(ENB, 100);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
}

void left()
{
    Serial.println("left");
    analogWrite(ENA, 60);
    analogWrite(ENB, 60);
    digitalWrite(IN4, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
}

void right()
{
    Serial.println("right");
    analogWrite(ENA, 60);
    analogWrite(ENB, 60);
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
