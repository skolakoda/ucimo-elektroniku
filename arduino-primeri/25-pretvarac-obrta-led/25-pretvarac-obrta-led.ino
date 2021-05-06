// https://electropeak.com/learn/rotary-encoder-how-it-works-how-to-use-with-arduino/
// Connect the + to 5V, GND to GND pin, CLK to pin number 6, and DT to pin number 7

#define encoderOutA 6 // CLK
#define encoderOutB 7 // DT
#define LED 9 // LED , must connect to pwm pin

int brightness = 0;
int State;
int old_State;

void setup() {
  pinMode (encoderOutA, INPUT);
  pinMode (encoderOutB, INPUT);
  pinMode (LED, INPUT);
  Serial.begin (9600);
  old_State = digitalRead(encoderOutA);
}

void loop() {
  State = digitalRead(encoderOutA);
  if (State != old_State)
  {
    if (digitalRead(encoderOutB) != State)
    {
      brightness ++;
    }
    else {
      brightness --;
    }
    if (brightness >= 255) brightness = 255;
    if (brightness <= 0) brightness = 0;
    Serial.print("brightness: ");
    Serial.println(brightness);
  }
  old_State = State; // the first position was changed
  analogWrite(LED , brightness);
}
