# Razdelnik napona

Napon „vuče“ elektrone kroz žicu, a otpornici se suprotstavljaju njihovom kretanju, koristeći deo napona. To smanjivanje napona zove se pad napona.

Razdelnik napona je kolo koje koristi pad napona za stvaranje manjeg napona u određenim tačkama kola. Na primer, ako je napajanje 9 volti, a neka komponenta se napaja manjim naponom, razdelnikom ćemo smanjiti napon.

## Formule

Izlazni napon se izračunava formulom:

```
V(izlaz) = R2 / (R1 + R2) * V(ulaz)
```

Pad napona na otporniku R1 računamo formulom:

```
V(R1) = R1 / (R1 + R2) * V(ulaz)
```

## Primer: ulaz 9V -> izlaz 3V

![](slike/razdelnik-napona.jpg)

Na primer, u kolu imamo dva otpornika (220 Ω i 110 Ω) i napajanje od 9 V. Pad napona na otporniku R1 je:

```
V(R1) = 220 Ω / (220 Ω + 110 Ω) * 9 V
      = 220 Ω / 330 Ω * 9 V 
      = 2 / 3 * 9 V 
      = 6 V
```

Izlazni napon računamo oduzimanjem napona na otporniku R1 od ulaznog napona:

```
V(izlaz) = V(ulaz) - V(R1)
         = 9 V - 6 V
         = 3 V
```

Izlazni napon se može izračunati i direktno:

```
V izlaz = 110 / 330 * 9V
        = 1/3 * 9V
        = 3V
```

## Primer: izlaz pola ulaza

Ako želite da izlazni napon bude upola manji od izvora, upotrebite dva otpornika iste otpornosti. Zatim upotrebite jednačinu da bi izračunali pad napona na otporniku Rl:

```
V(R1) = R1 / (R1 + R1) * Vt
      = R1 / 2 * R1 * Vt
      = 1 / 2 Vt
```

## Primer: izlaz 2/3 ulaza

Ako izlazni napon treba da ima vrednost dve trećine napona napajanja, upotrebite R1 čija je otpornost upola manja od otpornosti otpornika R2. Ponovo izračunajte pad napona:
```
V(R1) = R1 / (R1 + 2 R1) * Vt
      = R1 / 3 R1 * Vt
      = 1 / 3 Vt
```
