# Bitne elektronske formule

Jednačine otklanjaju nedoumice u elektronici. Umesto da prospemo komponente na sto i slažemo ih nasumično, iskusan elektroničar praviće kolo primenjujući jednačine, na osnovu kojih utvrđuje tačne vrednosti veličina.

Neke od jednačina koristimo i pri menjanju postojećih kola. Na primer, pomoću jednačine Omovog zakona za struju možemo odabrati odgovarajući otpornik da bi LED diode sijale jače ili slabije.

## Računanje nepoznanica pomoću Omovog zakona

[Omov zakon](omov-zakon) otkriva odnos snage, napona, struje i otpora. U tabeli su navedene jednačine pomoću kojih se računaju ove vrednosti:

Nepoznata vrednost | jedinica   | formula
-------------------|----|---------
Napon (V)     | volt   | V = I * R
Struja (I)    | amper  | I = V / R
Snaga (P)     | vat    | P = V * I
Otpornost (R) | om     | R = V / I

### Primer: snaga kola 

Da bi našli snagu kola koje zahteva 100 volti na 10 ampera, pomnožite voltažu s brojem ampera (100 x 10). Dakle, 1000 vati. Na osnovu ove brojke utvrdićete kakav osigurač možete dodati kolu, ili koliki ćete račun za struju dobiti na kraju meseca.

### Primer: traženje otpornika 

Da bi povezali LED diodu, otpornik i bateriju, moramo izračunati otpornost otpornika. Poznate su nam sledeće vrednosti:
* V: Napon. Pošto dioda kroz koju protiče struja pravi pad napona, moramo oduzeti napon na diodi (oko 1,2 volta za tipičnu LED) od izvora napajanja. Tako, ako je napajanje 5 volti, a pad napona na diodi 1,2 volta, ostaje 3,8 volti.
* I: Potrebna struja za LED diodu. Vrednost 20 mA je bezbedna za skoro svaku LED diodu; niža amperaža znači prigušenije svetlo, a viša od 40 ili 50 mA može uništiti diodu. Pošto struju moramo izraziti u amperima, to je 0,02 ampera.

Da bi našli vrednost otpornika, koji će ograničiti struju kroz LED diodu, koristimo Omov zakon na sledeći način:

```
R = V / I
  = 3,8 volti / 0,02 ampera 
  = 190 oma
```

## Računanje otpora

Otpornost jednog otpornika u kolu može se jednostavno izračunati. Ali, ako se otpornici spoje paralelno ili serijski, ukupna otpornost se menja. Vrednosti serijski vezanih otpornika se sabiraju, dok je ukupnu otpornost paralelne veze malo teže izračunati.

### Redna veza otpornika

Jednačina za serijsku vezu otpornika veoma je jednostavna - otpornosti se sabiraju:

```
Rt = R1 + R2 + R3 . . . (koliko god je potrebno)
```

Pretpostavimo da imate dva otpornika od 1,2 i 2,2 kilooma. Sabiranjem se dobija ukupna otpornost od 3,4 kilooma.

### Uporedna veza otpornika

Ukupna otpornost dva otpornika u paralelnoj vezi računa se nešto složenije. Evo jednačine:
```
Rt = (R1 * R2) / (R1 + R2)
```

Ako su pojedinačne otpornosti 1,2 kΩ (1200 Ω) i 2,2 kΩ (2200 Ω), ukupna otpornost je:

```
Rt = (1200 * 2200) / (1200 + 2200)
   = 2640000 / 3400
   = 776,47
```

Izračunajmo sada otpornost paralelne veze tri ili više otpornika:
```
Rt = 1 / (1/R1 + 1/R2 + 1/R3 + ...)
```

## Računanje kapacitivnosti

Pomoću ovih jednačina možemo izračunati ukupnu kapacitivnost u kolu, što odgovara inverznom obliku jednačina za otpornost.

### Uporedna veza kondenzatora

Ukupna kapacitivnost paralelno vezanih kondenzatora dobija se sabiranjem pojedinačnih kapacitivnosti:
```
Ct = C1 + C2 + C3...
```

### Redna veza kondenzatora

Računanje ukupne kapacitivnosti dva redno vezana kondenzatora:

```
Ct = (C1 * C2) / (C1 + C2)
```

Ako ima više od dva kondenzatora, ukupnu kapacitivnost računamo pomoću sledeće jednačine:
```
Ct = 1 / (1/C1 + 1/C2 + 1/C3 + ...)
```

## Jedinice energije

Vat-čas je jedna od najpraktičnijih mernih jedinica energije; opisuje mogućnost uređaja da obavi posao. Vat-časove računamo množenjem snage kola s vremenom rada kola. Jednačina za računanje vat-časova je:

```
Vat-časovi = P x T
```

gde je:
- P: snaga u vatima
- T: vreme u časovima rada na toj snazi

Vat-sekunde, odnosno džule, izračunaćemo ako vat-časove podelimo sa 3600.

## Računanje vremenske konstante (RC)

![](slike/rc-veza.jpg)

Elektronska kola često pomoću vremenskih konstanti odlažu slanje signala ili produžuju trajanje. Vremenske konstante najčešće se realizuju pomoću otpornika i kondenzatora - otud i njihov naziv, RC. Rad RC kola zasniva se na činjenici da pražnjenje kondenzatora kroz otpornik traje izvesno vreme. Što je veća otpornost ili kapacitivnost, kondenzator se duže prazni. RC vezu koristimo da bi napravili jednostavne tajmere i oscilatore ili izmenili oblik signala.

Da bismo zatvorili kolo sa slike, povezaćemo otpornik i kondenzator s nekom aktivnom komponentom, poput invertora ili tranzistora. Kad izmenimo vrednosti otpornika ili kondenzatora, menjamo trajanje izlaznog signala.

Vremenska konstanta se računa množenjem otpora i kapaciteta:

```
T = R * C
```

Na primer, vremenska konstanta kola sa otpornikom od 2000 oma i s kondenzatorom od 0,1 µF (0,0000001 F) iznosi 0,002 sekunde, odnosno dve milisekunde. 

## Računanje frekvencije i talasne dužine signala

Frekvencija signala je direktno srazmerna talasnoj dužini. Talasna dužina signala izražava se u milimetrima, a frekvencija u megahercima. Ove jednačine su korisne ako eksperimentišete s radio-talasima.

### Računanje frekvencije

Recimo kako hoćete da komunicirate s ljudima širom sveta putem amaterskog radio uređaja. U svetu radio amatera, kolege će vam pominjati da koristite određenu talasnu dužinu. Ovako računate frekvenciju za datu talasnu dužinu:

```
frekvencija = 300.000 / talasna dužina
```

Rezultat je izražen u megahercima.

### Računanje talasne dužine

Pomoću iste formule možemo izračunati talasnu dužinu, ako nam je poznata frekvencija radio signala:

```
talasna dužina = 300.000 / frekvencija
```

Rezultat je izražen u milimetrima. 

#### Primer

Pretpostavimo da komuniciramo s bićima iz svemira na 50 megaherca (50 miliona ciklusa po sekundi). Kada ubacimo te brojke u jednačinu, dobijamo:

```
talasna dužina = 300.000 / 50
               = 6000 (milimetara) 
```

Mnogi talasnu dužinu izražavaju u metrima. Pošto u metru ima 1000 milimetara, rezultat je 6 metara. Dakle, razgovarate na amaterskom radio kanalu talasne dužine 6 metara.
