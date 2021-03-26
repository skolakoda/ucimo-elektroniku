#include <IRremote.h>

const int infraRedPin = 2;

IRrecv irrecv(infraRedPin);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX); // print code as hex value
    irrecv.resume();                     // continue receiving IR signal
  }
}
