// https://electropeak.com/learn/rotary-encoder-how-it-works-how-to-use-with-arduino/
// Connect the + to 5V, GND to GND pin, CLK to pin number 6, and DT to pin number 7

#define encoderOutA 6 // CLK
#define encoderOutB 7 // DT

int counter = 0;
int State;
int old_State;

void setup() {
  pinMode (encoderOutA, INPUT);
  pinMode (encoderOutB, INPUT);
  Serial.begin (9600);
  old_State = digitalRead(encoderOutA);
}

void loop() {
  State = digitalRead(encoderOutA);
  if (State != old_State)
  {
    if (digitalRead(encoderOutB) != State)
    {
      counter ++;
    }
    else {
      counter --;
    }
    Serial.print("Position: ");
    Serial.println(counter);
  }
  old_State = State;
}
