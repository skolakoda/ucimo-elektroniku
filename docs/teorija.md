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

Divide the AC voltage by the square root of 2 to find the DC voltage.

Since an AC power supply sends voltage in alternating waves, DC voltage will be lower once you convert it.

    For example, if the AC power source has 120 V, then your formula would be 120/√(2) = 84.85 V DC 

If you don’t have a calculator, you can round √(2) to 1.4.

Know that the actual DC output will be less than your calculation.

## Regulacija napona

To ensure a steady voltage, we need to use something called a voltage regulator.

![](slike/regulator-napona.png)

Figure 5-6 shows how you would use the most common of voltage regulators, called the 7805. Using just a voltage regulator IC and two capacitors, any input voltage between 7V and 25V can be regulated to a constant 5V. The capacitors provide little reservoirs of charge that keep the regulator IC operating in a stable manner.

## Saveti

Za prosečnu potrošnju je dovoljno 200 W solarne ploče i 200 Ah akumulator.

Koju struju proizvode elektromotori? For generation of DC voltage select a brushed DC motor or a brushless EC motor with voltage rectifier. For the generation of AC voltage, select a brushless EC motor and connect 2 phases only.

- motori https://www.instructables.com/Complete-Motor-Guide-for-Robotics/
