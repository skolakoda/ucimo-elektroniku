# Korisne formule 

## Omov zakon

Struja = Napon / Otpor:
```
I = U / R
```

Izvedene varijante:
```
R = U / I

U = I * R
```

## Računanje otpornosti sijalice

R = (U * U) / P

U = napon, P = snaga sijalice (na nekima piše)

## Računanje amperaže uređaja

Ako znamo koliko uređaj ima V i W, onda znamo i A: 

A = W / V

Npr. ako imamo solarku od 12 V od 240 W, računamo A:

240 W / 12 V = 12 Ah 

(ako je prikačena na akumulator, deli se sa voltažom onog što puni)

## Električna snaga

Električna snaga je količina energije koju uređaj koristi. Izražava se u vatima (W).

P = U * I

Agregati imaju snagu koliko daju. Uređaji (npr. sijalice, grejalice) imaju snagu koliko troše. Otpornici imaju snagu koju podnose, npr. klasični su 1/4W.

Primer:

Beli LED koristi 3.2V i 24mA. Znači njegova snaga je:

```
P = 3.2V * 0.024A = 0.0768W
```

## Pretvaranje naizmenične struje u jednosmernu

Podeli napon izmenične struje korenom iz dva da odrediš napon usmerene.
```
U (DC) = U (AC) / √2
```

Pošto izmenična struja ide naizmenično, usmereni napon će biti niži kada se pretvori. Na primer ako je naizmenični napon 120 V, jednosmerni će biti:
```
120 V / √2 = 84.85 V (DC)
```

Aktuelni izlaz će biti manji od računice. Ako nemaš digitron, √2 možeš zaokružiti na 1.4. 

## Regulacija napona

![](slike/regulator-napona.png)

Da obezbedimo stabilan napon, treba nam regulator (stabilizator) napona. Slika pokazuje kako se koristi najčešći regulator napona: IC 7805. Uz pomoć te komponente i dva kondenzatora, svaki ulazni napon između 7V i 25V se stabilizuje u konstantnih 5V. 

Kondenzatori su mali rezervoari napona koji regulatoru napona IC omogućuju stabilan rad.

## Saveti

Za prosečnu potrošnju je dovoljno 200 W solarne ploče i 200 Ah akumulator.

Koju struju proizvode elektromotori? For generation of DC voltage select a brushed DC motor or a brushless EC motor with voltage rectifier. For the generation of AC voltage, select a brushless EC motor and connect 2 phases only.

- motori https://www.instructables.com/Complete-Motor-Guide-for-Robotics/
