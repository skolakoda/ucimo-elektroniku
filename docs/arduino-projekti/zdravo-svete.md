# Zdravo Svete

Arduinu treba napajanje i program da bi radio. Najprostiji program samo pali gasi lampicu.

Arduino UNO ima ugrađenu lampicu na pinu 13. Konstanta LED_BUILTIN označava taj pin. 

Možemo prikačiti i zasebnu LED diodu. Ako dodajemo LED, duža noga je pozitivna, a kraća uzemljenje.

![](https://docs.arduino.cc/static/c8dbeff786e52681c3d0e9ee9525e140/29114/schematic.png)

## Primer koda

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
