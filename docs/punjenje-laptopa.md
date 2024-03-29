## Punjenje laptopa u prirodi

Moj laptop (Lenovo ThinkPad X1 Carbon) ima litijum-polimersku bateriju od 14.8 V (3200 mAh / 47 Wh).

Za napajanje je potreban napon od 20V, a struja 2.25A ili 3.25A (tj. snaga od 45W ili 65W). Struja može biti jednaka ili jača, ne slabija (potrošač uzima struje samo koliko mu treba). Ako je slabija, laptop će verovatno odbiti da se puni. Telefonski punjači su slabiji, pa ne odgovaraju.

## Problem: USB-C/PD (*Power Delivery*)

Univerzalni Lenovo ispravljač (max 65W) daje sledeće izlaze: 

- 5V-2A (10W) ili
- 9V-2A (18W) ili
- 15V-3A (45W) ili
- 20V-3.25A (65W)

Kada u punjač uključimo neki uređaj, on prvo isporučuje 5V (jer USB mora raditi sa 5V), nakon čega počinje komunikacija punjača i uređaja. Punjač predstavlja svoje mogućnosti (mogu isporučivati 5V na 2A, 9V na 2A, 15V na 3A ili 20V na 3.25A), nakon čega uređaj javlja opciju koju želi. Kada punjač primi zahtev, počinje da isporučuje traženu snagu.

Punjač mora podržavati *Power Delivery* protokol! Ako samo isporuči 20V bez PD protokola, može oštetiti ulazni port (koji inicijalno prima samo 5V) ili spaliti PD kontroler unutar laptopa.

## Solarne opcije

- **Samo solarni panel i stabilizator napona** na 20V. Radi samo dok je sunce.
- **Automobilski punjač**. Utičnica za upaljač može puniti laptop preko posebnog kabla.
- **Akumulator i podizač napona** sa 12V na 20V, ali samo za uređaje bez USB-C/PD. Moguće je dodati i triger za *Power Delivery*, što automobilski punjač već ima.
- **Akumulator i invertor** (*car inverter*) - na duže staze užasno neefikasno. Prvo invertor pretvara jednosmernu u naizmeničnu, a potom ispravljač vraća naizmeničnu u jednosmernu. Ako oba pretvaranja imaju efikasnost od 80%, ukupni gubitak energije je 36%.

## Ostale opcije

- **Laptop power bank** za kraće boravke
