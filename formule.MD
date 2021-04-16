# Korisne formule 

## Omov zakon

```
I = U / R

R = U / I

U = I * R
```

gde je: 
- I - struja 
- R - otpor 
- U - napon

## LED dioda

Svaka crvena svetleća dioda obara napon kola za 2V (plave i bele za 4V). 

Oko 20mA je najveća struja koju LED dioda prima.

### Obavezan otpornik

Svetleća dioda mora omati otpornik povezan redno da joj ograniči struju, ili će pregoreti. Otpornost otpornika se računa formulom:

```
R = (VS - VL) / I 
```

gde je:
- R = otpornost u omima
- VS = napon napajanja
- VL = napon diode (2V ili 4V)
- I = struja diode (mora biti manja od limita, dakle 10 ili 15mA). 

Formula je izvedena iz Omovog zakona (R = V / I), kada se oduzme napon diode dobijamo: R = (VS - VL) / I.

Na primer, ako je:
- napajanje (VS) = 9V 
- napon diode (VL) = 2V 
- njena struja (I) = 20mA = 0.02A

```
R = (9V - 2V) / 0.02A = 350ohm
```

Ako nema takvog otpornika, koristimo otpornik prve veće vrednosti (390ohm).

### Redno vezivanje

Kada se svetleće diode povezuju redno, svaka obara napon kola za 2V (bele i plave za 4V). Svaka redno vezana LED dioda prosleđuje istu struju, pa je najbolje da su sve istog tipa.

Napajanje mora biti dovoljno da obezbedi po 2V za svaku LED (ili 4V) i još najmanje 2V za otpornik.

LED diode se obično ne vezuju uporedo: https://www.electronicsclub.info/leds.htm

## Merenja

### Merenje napona (voltaže)

Napon se može meriti između različitih tačaka u kolu, npr. napon preko otpornika, LED diode ili celog kola. Kada merimo napon neke komponenete kačimo multimer za njene nožice, a kada merimo celo kolo onda za napajanje.

### Merenje struje u kolu

Povezati u redno kolo: napajanje -> otpornik -> multimer

BATERIJA OD 4.5V

U = 4.7 v
R = 100 kΩ
I = U / R
I = 4.7v / 100000 Ω = 0.000047 A
= 0.047 mA
= 47 mikro A
(izmerena struja 46 mikro A)

BATERIJA ŠRAFILICE OD 12V

U = 12.15 v
R = 100 kΩ
I = U / R
I = 12.15 / 100000 Ω = 0.0001215 A
= 0.1215 mA
= 121.5 mA
(izmerena struja 119 mikro A)

## Računanje otpornosti sijalice

R = (U * U) / P

U = napon, P = snaga sijalice (na nekima piše)

## Računanje amperaže uređaja

Ako znamo koliko uređaj ima V i W, onda znamo i A: 

A = W / V

Npr. ako imamo solarku od 12 V od 240 W, računamo A:

240 W / 12 V = 12 Ah 

(ako je prikačena na akumulator, deli se sa voltažom onog što puni)

## Pretvaranje naizmenične struje u jednosmernu

Divide the AC voltage by the square root of 2 to find the DC voltage.

Since an AC power supply sends voltage in alternating waves, DC voltage will be lower once you convert it.

    For example, if the AC power source has 120 V, then your formula would be 120/√(2) = 84.85 V DC 

If you don’t have a calculator, you can round √(2) to 1.4.

Know that the actual DC output will be less than your calculation.

## Saveti

Za prosečnu potrošnju je dovoljno 200 W solarne ploče i 200 Ah akumulator.

Koju struju proizvode elektromotori? For generation of DC voltage select a brushed DC motor or a brushless EC motor with voltage rectifier. For the generation of AC voltage, select a brushless EC motor and connect 2 phases only.