/*
* IRRemote code test
* Example 1.2: display the type of IR protocol such as NEC, Sony SIRC, Philips RC5, Philips RC6
*/
#include <IRremote.h>
const int irReceiverPin = 2;

IRrecv irrecv(irReceiverPin);
decode_results results;

void setup()
{
  Serial.begin(9600);  // set communication rate at 9600 bps
  irrecv.enableIRIn(); // start IR decoding
}

// display the type of IR protocol
void showIRProtocol(decode_results *results)
{
  Serial.print("Protocol: ");
  // determine the type of IR protocol
  switch (results->decode_type)
  {
  case NEC:
    Serial.print("NEC");
    break;
  case SONY:
    Serial.print("SONY");
    break;
  case RC5:
    Serial.print("RC5");
    break;
  case RC6:
    Serial.print("RC6");
    break;
  default:
    Serial.print("Unknown encoding");
  }

  // serial print IR code to Serial port Serial.print(", irCode: ");
  Serial.print(results->value, HEX);
  // IR code
  Serial.print(", bits: ");
  Serial.println(results->bits); // IR code bit
}

void loop()
{
  if (irrecv.decode(&results))
  {                           // finish decoding, receive IR signal
    showIRProtocol(&results); // display the type of IR protocol
    irrecv.resume();          // continue receiving IR signal coming next
  }
}
