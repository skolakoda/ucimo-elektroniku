# Zdravo Svete

Arduino UNO ima ugrađenu sijaličicu na pin 13. Konstanta LED_BUILTIN označava taj pin. 

Možemo koristiti i zasebnu svetleću diodu. Ako dodajemo LED, duža noga je pozitivna, a kraća uzemljenje.

```c
const int ledPin = 13; // LED_BUILTIN = 13
int interval = 1000;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);   // povećava voltažu
  delay(interval);              // čeka sekund
  digitalWrite(ledPin, LOW);    // smanjuje voltažu
  delay(interval);              // čeka sekund
}
```

Izvor: http://www.arduino.cc/en/Tutorial/Blink
