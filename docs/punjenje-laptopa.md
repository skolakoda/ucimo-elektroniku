## Punjenje laptopa u prirodi

Moj laptop (Lenovo ThinkPad X1 Carbon) ima litijum-polimersku bateriju od 14.8 V (3200mAh / 47Wh).

Za napajanje je potreban napon od 20V, a struja 2.25A ili 3.25A (tj. snaga od 45W ili 65W). Struja može biti jednaka ili jača, ne slabija (potrošač uzima struje samo koliko mu treba). Ako je slabija, laptop će verovatno odbiti da se puni. Telefonski punjači su slabiji, pa ne odgovaraju.

## Problem: USB-C/PD (*Power Delivery*)

Univerzalni Lenovo ispravljač (max 65W) daje sledeće izlaze: 

- 5V-2A (10W) ili
- 9V-2A (18W) ili
- 15V-3A (45W) ili
- 20V-3.25A (65W)

Kada u punjač uključite neki uređaj, on prvo isporučuje 5V (jer USB mora raditi sa 5V), nakon čega počinje komunikacija punjača i uređaja. Punjač predstavlja svoje mogućnosti (mogu isporučivati 5V na 2A, 9V na 2A, 15V na 3A ili 20V na 3.25A), nakon čega uređaj javlja opciju koju želi. Kada punjač primi zahtev, počinje da isporučuje traženu snagu.

Punjač mora podržavati *Power Delivery* protokol! Ako samo isporuči 20V bez PD protokola, može oštetiti ulazni port (koji inicijalno prima samo 5V) ili spaliti PD kontroler unutar laptopa.

## Solarne opcije

- **Direktno solarni panel i stabilizator napona** na 20V.
- **Akumulator i podizač napona** sa 12V na 20V. Ako nema USB Type-C izlaz, iseći i povezati (crnu i crvenu žicu). Može i *laptop car charger* + ženska utičnica za upaljač (*Cigarette Lighter Female Socket Plug*).
- **Akumulator i invertor** (*car inverter*) - užasno neefikasno! Prvo pretvara jednosmernu u naizmeničnu, potom ispravljač laptopa vraća naizmeničnu u jednosmernu. Ako oba pretvaranja imaju efikasnost od 80%, ukupni gubitak energije je 36%.
- **Puniti direktno baterije laptopa**, izbeći ugrađena ograničenja (Lenovo ima 8 litijum-polimerskih ćelija). Za baterije je moguće koristiti predviđeni punjač baterija.

## Ostale opcije

- **Punjenje pedalanjem** (ručni vojni generator)
- **Punjenje vetrom**
- **Laptop power bank** za kraće boravke

## Automobilski utikač (upaljač)

The voltage of the power outlet is usually near 12 V DC, (13.5V to 15V while the running engine is turning the alternator). The 12V power circuit is protected by a car fuse, often rated at 10 to 20 amperes. Large appliances such as hair dryers or toasters draw too much power to be fed. 
