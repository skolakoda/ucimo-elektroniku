# Elektronske formule

Jednačine otklanjaju nedoumice u elektronici. Umesto da komponente slažemo nasumično, iskusan elektroničar pravi kolo primenjujući jednačine, na osnovu kojih utvrđuje tačne vrednosti.

Jednačine koristimo i pri menjanju postojećih kola. Na primer, pomoću Omovog zakona možemo odabrati odgovarajući otpornik da bi LED diode sijale jače ili slabije.

## Računanje nepoznatih pomoću Omovog zakona

[Omov zakon](omov-zakon) otkriva odnos snage, napona, struje i otpora. U tabeli su navedene jednačine pomoću kojih se računaju ove vrednosti:

Nepoznata vrednost | jedinica   | formula
-------------------|------------|----------------
Napon (V)          | volt (V)   | V = I * R
Struja (I)         | amper (A)  | I = V / R
Snaga (P)          | vat (W)    | P = V * I
Otpor (R)          | om (Ω)     | R = V / I

### Primer: računanje snage kola 

Da bi izračunali snagu kola koje zahteva 100 volti na 10 ampera, pomnožite voltažu s brojem ampera (100 x 10). Dakle, 1000 vati. Na osnovu ove vrednosti utvrdićemo kakav osigurač treba dodati kolu ili koliki će račun za struju biti na kraju meseca.

### Primer: traženje otpornika 

Da bismo povezali LED diodu, otpornik i bateriju, moramo izračunati otpornost otpornika. Poznate su nam sledeće vrednosti:
* Napon (V). Pošto dioda u kolu pravi pad napona, moramo oduzeti napon na diodi (oko 1,2 volta za tipičnu LED) od izvora napajanja. Tako, ako je napajanje 5 volti, a pad napona na diodi 1,2 volta, ostaje 3,8 volti.
* Potrebna struja (I) za LED diodu. Vrednost 20 mA je bezbedna za skoro svaku LED diodu; niža amperaža znači prigušenije svetlo, a viša od 40 ili 50 mA može uništiti diodu. Pošto struju moramo izraziti u amperima, to je 0,02 ampera.

Da bismo našli vrednost otpornika koji će ograničiti struju kroz LED diodu, koristimo Omov zakon na sledeći način:

```
R = V / I
  = 3,8 volti / 0,02 ampera 
  = 190 oma
```

## Računanje ukupnog otpora (Rt)

Otpor jednog otpornika u kolu može se jednostavno izračunati. Ali, ako se otpornici spoje paralelno ili serijski, ukupan otpor se menja. Vrednosti serijski vezanih otpornika se sabiraju, dok je ukupan otpor paralelne veze malo teže izračunati.

### Redna veza otpornika

Jednačina za serijsku vezu otpornika je prosta - svi otpori se sabiraju:

```
Rt = R1 + R2 + R3 . . . (koliko god je potrebno)
```

Na primer, imamo dva otpornika od 1,2 i 2,2 kilooma. Sabiranjem se dobija ukupan otpor od 3,4 kilooma.

### Uporedna veza otpornika

Ukupan otpor otpornika u paralelnoj vezi računa se nešto složenije:

```
Rt = 1 / (1/R1 + 1/R2 + 1/R3 + ...)
```

Ukupan otpor u paralelnoj vezi sa dva otpornika računamo na sledeći način:

```
Rt = (R1 * R2) / (R1 + R2)
```

Na primer, ako imamo dva otpornika od 1,2 kΩ (1200 Ω) i 2,2 kΩ (2200 Ω), ukupan otpor je:

```
Rt = (1200 * 2200) / (1200 + 2200)
   = 2640000 / 3400
   = 776,47
```

## Računanje ukupne kapacitivnosti (Ct)

Na sličan način možemo izračunati ukupnu kapacitivnost u kolu, što odgovara inverznom obliku jednačina za otpornost.

### Redna veza kondenzatora

Ukupna kapacitivnost kondenzatora u serijskoj vezi računa se na sledeći način:

```
Ct = 1 / (1/C1 + 1/C2 + 1/C3 + ...)
```

Ako ima samo dva redno vezana kondenzatora, možemo  uprostiti jednačinu:

```
Ct = (C1 * C2) / (C1 + C2)
```

### Uporedna veza kondenzatora

Jednačina za paralelnu vezu kondenzatora je jednostavna – svi kapaciteti se sabiraju:

```
Ct = C1 + C2 + C3 . . . (koliko god je potrebno)
```

## Računanje energije (Wh)

Vat-čas (*watt-hour*, skraćeno Wh) je jedna od najpraktičnijih mernih jedinica energije; opisuje mogućnost uređaja da obavi posao. Vat-časove računamo množenjem snage kola s vremenom rada kola. Formula je:

```
Vat-časovi = P x T
```

gde je:
- P: snaga u vatima
- T: vreme u časovima rada na toj snazi

Vat-sekunde, odnosno džule, izračunaćemo ako vat-časove podelimo sa 3600.

## Računanje vremenske konstante (RC)

![](slike/rc-veza.jpg)

Elektronska kola često pomoću vremenskih konstanti odlažu slanje signala ili produžuju trajanje. Vremenske konstante najčešće se realizuju pomoću otpornika i kondenzatora - otud i njihov naziv, RC. Rad RC kola zasniva se na činjenici da pražnjenje kondenzatora kroz otpornik traje izvesno vreme. Što je veći otpor ili kapacitivnost, kondenzator se duže prazni. RC vezu koristimo da bismo napravili jednostavne tajmere i oscilatore ili izmenili oblik signala.

Da bismo zatvorili kolo sa slike, povezaćemo otpornik i kondenzator s nekom aktivnom komponentom, poput invertora ili tranzistora. Kad izmenimo vrednosti otpornika ili kondenzatora, menjamo trajanje izlaznog signala.

Vremenska konstanta se računa množenjem otpora i kapaciteta:

```
T = R * C
```

Na primer, vremenska konstanta kola sa otpornikom od 2000 oma i s kondenzatorom od 0,1 µF (0,0000001 F) iznosi 0,002 sekunde, odnosno dve milisekunde. 

## Računanje frekvencije i talasne dužine signala

Frekvencija signala (u megahercima) je direktno srazmerna talasnoj dužini (u milimetrima). Ove jednačine su korisne ako eksperimentišete s radio-talasima.

### Računanje frekvencije

Recimo kako hoćete da komunicirate s ljudima širom sveta putem amaterskog radio uređaja. U svetu radio amatera, kolege će vam reći da koristite određenu talasnu dužinu. Ovako računate frekvenciju za datu talasnu dužinu:

```
frekvencija = 300.000 / talasna dužina
```

### Računanje talasne dužine

Pomoću iste formule možemo izračunati talasnu dužinu, ako nam je poznata frekvencija radio signala:

```
talasna dužina = 300.000 / frekvencija
```

#### Primer

Pretpostavimo da komuniciramo s bićima iz svemira na 50 megaherca (50 miliona ciklusa po sekundi). Kada ubacimo te brojke u jednačinu, dobijamo:

```
talasna dužina = 300.000 / 50
               = 6000 (milimetara) 
```

Mnogi talasnu dužinu izražavaju u metrima. Pošto u metru ima 1000 milimetara, rezultat je 6 metara. Dakle, razgovarate na amaterskom radio kanalu talasne dužine 6 metara.
