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

## LED dioda

Svaka svetleća dioda obara napon kola za 2V (plave i bele za 4V). 

Oko 20mA je najveća struja koju dioda prima.

### Obavezan otpornik

Svetleća dioda mora omati otpornik povezan redno da joj ograniči struju, ili će pregoreti. Otpornost otpornika se računa formulom, koja je izvedena iz Omovog zakona (R = V / I):

```
R = (VS - VL) / I 
```

gde je:
- R = otpornost u omima
- VS = napon napajanja
- VL = napon diode (2V ili 4V plava i bela)
- I = struja diode (20mA ili 0.02A, može manje, ne više). 

Na primer, ako je napajanje 9V, za jednu crvenu diodu treba otpornik:

```
R = (9V - 2V) / 0.02A 
  = 7V / 0.02A 
  = 350ohm
```

Ako je napajanje 4.5V, onda treba otpornik:

```
R = (4.5V - 2V) / 0.02A
  = 2.5V / 0.02A
  = 125 Ω
```

Ako nema tačnog otpornika, koristimo prvu veću vrednost.

### Redno vezivanje

Kada se svetleće diode povezuju redno, svaka obara napon kola za 2V (bele i plave za 4V). Svaka redno vezana LED dioda prosleđuje istu struju, pa je najbolje da su sve istog tipa.

Napajanje mora biti dovoljno da obezbedi po 2V za svaku LED (ili 4V) i još najmanje 2V za otpornik.

LED diode se obično ne vezuju uporedo: https://www.electronicsclub.info/leds.htm

## Merenja

### Merenje napona

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

## Punjenje baterija

Primer:
- 12v punjač
- 4 x AA NiMH baterije

The easiest way to charge a NiMH (Nickel-metal hydride) battery pack is to trickle charge it, limiting the current with a resistor. To calculate the value of R1, we first have to decide what current we want to charge our battery with. Generally, a NiMH battery can be safely trickle charged with less than 0.1C indefinitely. If the AA batteries we have each hold a C of 2000mAh, then we can charge them at up to 200mA. To be on the safe side, and if we planned to allow the batteries to “trickle” charge most of the time—for, say, a battery backup project—I would probably use a lower current of 0.05C or more conveniently C/20, which is 100mA.

Typically, the charge time for NiMH batteries is about 3C times the charging current, so at 100mA, we could expect our batteries to take 3 × 2000mAh / 100mA = 60 hours.

Back to calculating R1. When the batteries are discharged, each will be at a voltage of about 1.0V, so the voltage across the resistor will be 12V – 4V = 8V.

R = V / I = 8V / 0.1A = 80Ω.

Let’s be conservative and choose the convenient resistor value of 100Ω. Feeding this back in, the actual current will be

I = V / R = 8V / 100Ω = 80mA.

When the batteries are fully charged, their voltage will rise to about 1.3V so the current will reduce to: 

I = V / R = (12V – 1.3V × 4) / 100Ω = 68mA.

Now we just need to find out what maximum power rating we need for R1.

P = I V = 0.08A × 8 = 0.64W = 640 mW

So, we should probably use a 1-W resistor.

## Cell Phone Battery

Tipical battery is 3.7V (a single cell) and 1600mAh.

When using a LiPo battery, remember that if you discharge them too far (below about 3V per cell), you can permanently damage them. Most new LiPo batteries will include an automatic cut-off circuit, built into the battery package, to prevent over-discharging, but this may not be the case for a scavenged battery.

## Regulacija napona

To ensure a steady voltage, we need to use something called a voltage regulator.

voltage-regulator.png

Figure 5-6 shows how you would use the most common of voltage regulators, called the 7805. Using just a voltage regulator IC and two capacitors, any input voltage between 7V and 25V can be regulated to a constant 5V. The capacitors provide little reservoirs of charge that keep the regulator IC operating in a stable manner.

## Merenje solarnog panela

Kada merimo solarni panel, treba povezati njegov plus i minus otpornikom, da bi imao potrošača. and then try out the solar panel in various locations and levels of brightness, measuring the voltage across the resistor. From this, you can calculate the current being provided by the panel.

## Merenje baterija

the voltage of a battery shown when it is not powering anything can be a little misleading. For a more accurate picture, use a 100Ω resistor as a “dummy” load.

## Električna snaga

Električna snaga je količina energije koju uređaj koristi. Izražava se u vatima (W).

P = U * I

Agregati imaju snagu koliko daju. Uređaji (npr. sijalice, grejalice) imaju snagu koliko troše. Otpornici takođe imaju svoju snagu koju podnose u vatima, npr. klasični su 1/4W.

Primer:

Beli LED koristi 3.2V i 24mA. Znači njegova snaga je:

```
P = 3.2V * 0.024A = 0.0768W
```

## Kondenzatori

Na svakom piše koliki napon najviše podnosi. Neki su oblika valjka, neki diska (okrugli), a neki pravougli. Valjkasti imaju anodu i katoru, a okrugli i pravougli nemaju.

Kapacitivnost se meri u faradima (F).

## Saveti

Za prosečnu potrošnju je dovoljno 200 W solarne ploče i 200 Ah akumulator.

Koju struju proizvode elektromotori? For generation of DC voltage select a brushed DC motor or a brushless EC motor with voltage rectifier. For the generation of AC voltage, select a brushless EC motor and connect 2 phases only.

- motori https://www.instructables.com/Complete-Motor-Guide-for-Robotics/
