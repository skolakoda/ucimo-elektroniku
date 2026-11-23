// https://electropeak.com/learn/rotary-encoder-how-it-works-how-to-use-with-arduino/
// Connect the + to 5V, GND to GND pin, CLK to pin number 6, and DT to pin number 7

#define DT 6
#define CLK 7

int brojac = 0;
int staroStanje;

void setup() {
  pinMode (DT, INPUT);
  pinMode (CLK, INPUT);
  Serial.begin (9600);
  staroStanje = digitalRead(DT);
}

void loop() {
  int stanje = digitalRead(DT);
  if (stanje != staroStanje)
  {
    if (digitalRead(CLK) != stanje)
    {
      brojac ++;
    }
    else {
      brojac --;
    }
    Serial.print("brojac: ");
    Serial.println(brojac);
  }
  staroStanje = stanje;
}
