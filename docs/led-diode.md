# Svetleće diode (LED)

Svetleća dioda (LED) je posebna vrsta dioda, isključivo za emitovanje svetlosti. Mogu biti raznih boja. Podnose vrlo slabe struje. Svaka svetleća dioda obara napon kola za oko 2V (plave i bele za 4V). Oko 20mA je najveća struja koju podnosi.

Za LED diode navode se najveća dozvoljena struja i vršna struja. Vršna struja je apsolutno maksimalna struja koju možete propustiti kroz LED diodu u vrlo kratkom vremenu. Kratko istinski znači kratko - reda veličine milisekundi. Ove dve veličine ne treba mešati!

Svetleća dioda mora imati otpornik povezan redno da joj ograniči struju, ili će pregoreti. 

## Računanje otpornika za LED

Otpornost otpornika se računa formulom, koja je izvedena iz Omovog zakona (R = V / I):

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

Ako nema tačnog otpornika, koristimo prvu veću vrednost. Ako stavimo jači otpornik, dioda će slabije svetleti. Ako stavimo slabiji otpornik, možemo uništiti diodu. Pošto LED diode nisu skupe, možete eksperimentisati sa različitim otpornicima.

## Redna veza

Kada se svetleće diode povezuju redno, svaka obara napon kola za oko 2V (bele i plave za 4V). Napajanje kola mora biti dovoljno da obezbedi po 2V (ili 4V) za svaku LED, i još najmanje 2V za otpornik.

Svaka redno vezana LED dioda trpi istu struju, pa je najbolje da sve budu istog tipa. 

LED diode se obično ne vezuju uporedo: https://www.electronicsclub.info/leds.htm
