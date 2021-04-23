# LED dioda

Svaka svetleća dioda obara napon kola za 2V (plave i bele za 4V). 

Oko 20mA je najveća struja koju dioda prima.

## Otpornik za LED

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

## Redno vezivanje

Kada se svetleće diode povezuju redno, svaka obara napon kola za 2V (bele i plave za 4V). Svaka redno vezana LED dioda prosleđuje istu struju, pa je najbolje da su sve istog tipa.

Napajanje mora biti dovoljno da obezbedi po 2V za svaku LED (ili 4V) i još najmanje 2V za otpornik.

LED diode se obično ne vezuju uporedo: https://www.electronicsclub.info/leds.htm
