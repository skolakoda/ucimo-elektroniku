# Noćni kontrolor

![](../slike/projekti/nocni-kontrolor.jpg)

Noćni kontrolor pali svetiljke kada je noć, a gasi kada je dan. Pored toga, u svako doba reaguje na glasan zvuk (pljesak) i menja stanje svetiljki.

## Komponente

Glavne komponente su:
- Arduino Uno
- Senzor zvuka (KY-037)
- Fotootpornik (sa otpornikom za razdelnik napona)
- MOSFET kao prekidač
- sijaličice (sa zasebnim napajanjem)

## Logika

Logika programa:

- Svetlo se pali automatski noću, samo jednom, na zadato trajanje (pola sata).
- Svetlo se gasi dolaskom dana ili kada istekne trajanje.
- Pljesak pali ili gasi svetlo u svakom trenutku.
