# Redna i uporedna kola

[wiki](https://sh.wikipedia.org/wiki/Redna_i_uporedna_kola)

![](slike/redna-i-uporedna-kola.png)

Komponente u kolu možemo povezati **redno** (serijski), tako da ista struja ide kroz sve komponente, ili **uporedo** (paralelno), tako da deo elektrona protiče kroz jednu komponentu a deo kroz drugu.

U rednom kolu napon pada po komponentama, ali kroz svaku protiče ista količina elektrona. U paralelnom kolu napon je isti na svim granama, ali struja se deli.

## Redna veza

![](https://upload.wikimedia.org/wikipedia/commons/9/9a/LEDCircuit.PNG)

Recimo da imamo kolo sastavljeno od baterije, sijalice i otpornika. Elektroni se kreću od negativnog pola baterije kroz otpornik a zatim prolaze kroz sijalicu. Takav raspored komponenti zove se redna veza, što znači da elektricitet redom struji kroz komponente.

### Redna veza otpornika

![](https://upload.wikimedia.org/wikipedia/commons/thumb/0/0d/Series_circuit.svg/320px-Series_circuit.svg.png)

Ukupan otpor u kolu izračunavamo sabiranjem otpornosti komponenti. Recimo da imamo kolo sa četiri otpornika u rednoj vezi. Da bi izračunali ukupnu otpornost kola (Rt), saberite otpornost svih otpornika. Na primer:

```
Rt = 220 Ω + 33 Ω + 10 Ω + 330 Ω 
   = 593 Ω
```

Tako dobijenu vrednost Rt možemo, na osnovu Omovog zakona, upotrebiti za izračunavanje struje u kolu. Ako je napajanje 9 volti, sledi:

```
I = V / R 
  = 9 V / 593 Ω 
  = 0,015 ampera ili 15 miliampera
```

Zašto treba voditi računa o jačini struje u kolu? 
* Čak i najizdržljivije komponente mogu podneti samo određenu jačinu struje. Na primer, LED dioda će verovatno pregoreti ako kroz nju propustite više od 50 miliampera.
* Napajanje može da obezbedi struju samo određene jačine. Da bi sve radilo kako treba, obezbedite dovoljan izvor napajanja.

## Uporedna veza

U kolima s rednom vezom može se pojaviti sledeći **problem**: ako jedna komponenta otkaže, prekida struju kola. Na primer, ako svetleća reklama ima 200 redno vezanih sijalica, čim jedna pregori, sve prestaju da svetle. Postoji **rešenje** - komponente možemo povezati paralelno. Tada, ako jedna sijalica pregori, 199 ispravnih i dalje svetli. Naravno, poruka se može nehotice izmeniti :)

### Paralelna veza otpornika

![](slike/uporedna-veza-otpornika.jpg)

Evo kako radi kolo sa slike: elektroni se kreću od negativnog pola baterije, prolaze kroz svaki otpornik i stižu do pozitivnog pola baterije. Elektroni koji prođu kroz jedan otpornik, ne prolaze kroz ostale. Ukupna otpornost kola izračunava se sledećom jednačinom:

```
Rt = 1 / (1/220 Ω + 1/33 Ω + 1/10 Ω + 1/330 Ω) 
   = 7,2 Ω
```

Za razliku od rednog kola, gde je ukupan otpor zbir svih otpora, u uporednom kolu je **ukupan otpor manji od najmanjeg otpora**. 

Ukupnu struju u kolu računamo tako što unesemo ukupan otpor u Omov zakon. Ako je i ovde napajanje 9 volti, ukupna struja iznosi 1,25 ampera:
```
I = V / Rt 
  = 9 volti / 7,2 Ω 
  = 1,25 ampera
```

Ako ovde koristimo bateriju kao izvor napajanja, ona će se istrošiti vrlo brzo. Na baterijama je navedena vrednost u ampersatima. Baterija od jednog ampersata traje samo sat vremena ako kolo crpi jedan amper. Zato prilikom izbora napajanja moramo uzeti u obzir jačinu struje i koliko dugo kolo mora da radi.
