# Noćni kontrolor

![](../slike/projekti/nocni-kontrolor.jpg)

Noćni kontrolor pali svetiljke kada je noć, a gasi kada je dan. Pored toga, u svako doba reaguje na glasan zvuk (pljesak) i menja stanje svetiljki.

Glavne komponente su:
- Arduino Uno
- Senzor zvuka (KY-037)
- Fotootpornik (sa otpornikom za razdelnik napona)
- MOSFET kao prekidač
- sijaličice (sa zasebnim napajanjem)

## Specifikacija programa

Mogući scenariji:
- mrak -> svetiljke se pale na 30 min
    - pljesak -> gasi svetiljke dok traje mrak
        - pljesak -> svetiljke se pale na 30 min
    - prođe 30 min -> gasi svetiljke dok traje mrak
- dan -> gasi svetiljke i resetuje stanje
    - pljesak -> svetiljke se pale na 3 min
        - novi pljesak pre isteka -> gasi svetiljke i resetuje stanje
    - prođe 3 min -> gasi svetiljke i resetuje stanje

