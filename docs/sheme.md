# Električna šema

[wiki](https://sh.wikipedia.org/wiki/Elektri%C4%8Dna_shema)

![](https://upload.wikimedia.org/wikipedia/commons/9/9a/LEDCircuit.PNG)

Zamislite da pravimo drvenu kućicu za odmor. Pre nego što počnemo radove, treba napraviti projekat, tj. nacrt kućice. 

Isto tako, **električna šema je nacrt elektronskog kola**, koje čini osnovu svakog uređaja. Šematski dijagrami pokazuju kako su komponente u kolu povezane. Simboli predstavljaju komponente a linije način njihovog povezivanja.

Ako se bavite elektronikom, pre ili kasnije morate naučiti kako se čitaju šeme. Jezik šema nije tako težak. Na većini dijagrama koristi se tek desetak simbola za komponente, kao što su otpornici, kondenzatori i tranzistori.

## Čemu služe šeme?

Šeme imaju dve osnovne svrhe:
* Pokazuju kako da napravimo kolo. Prepoznavanjem simbola i praćenjem njihovih međusobnih veza, možemo napraviti kolo prikazano na šemi.
* Omogućuju da razumemo kako kolo radi. Tako možemo popraviti neispravno kolo ili zameniti komponentu.

U šemama se uglavnom poštuju standardne konvencije. One se donekle mogu razlikovati na osnovu vremena nastanka, zemlje porekla, konvencije projektanta i sl.

# Šematski simboli

[wiki](https://sh.wikipedia.org/wiki/Simboli_u_elektronici)

![](https://upload.wikimedia.org/wikipedia/commons/c/cb/Circuit_elements.svg)

U šemama elektronskih kola koristi se nekoliko stotina simbola. No, neophodno je zapamtiti samo nekoliko desetina. Ostale možemo potražiti u priručnicima po potrebi.

Šematske simbole delimo u četiri kategorije;
* **Osnovni simboli**: napajanje, uzemljenje, tačke spajanja, konektori, ulazi, izlazi.
* **Komponente**: otpornici, kondenzatori, tranzistori, diode, kalemi.
* **Logički simboli**: kola I, ILI, NILI i NE (invertori).
* **Ostali simboli**: prekidači, sijalice i ostali hardver.

## Napajanje

[wiki](https://sh.wikipedia.org/wiki/Napajanje)

![](https://upload.wikimedia.org/wikipedia/commons/f/ff/%D0%98%D1%81%D1%82%D0%BE%D1%87%D0%BD%D0%B8%D0%BA%D0%A2%D0%BE%D0%BA%D0%B0%D0%A3%D1%81%D0%BB%D0%BE%D0%B2%D0%BD%D0%BE%D0%B5%D0%9E%D0%B1%D0%BE%D0%B7%D0%BD%D0%B0%D1%87%D0%B5%D0%BD%D0%B8%D0%B5.PNG)

Simbol napajanja liči na štapić s kružićem na vrhu. Kolo može da se napaja iz izvora naizmenične struje (AC), poput utičnice, ili jednosmerne (DC), poput baterije ili adaptera. 

Eletrična kola se mogu napajati:
* **Iz gradske mreže**; obično se koristi interno napajanje koje naizmenični napon od 220 volti pretvara u niži jednosmerni napon. Na šemi uređaja koji se napaja iz gradske mreže je verovatno prikazano i naizmenično i jednosmerno napajanje.
* **Jednosmernim naponima**; na šemi se nalazi jedan ili više izvora napajanja, kao što su +5 V, +12 V pa čak i +5/-12 V. Ako na šemi nije naveden napon, obično se podrazumeva 5 V.

## Uzemljenje

[wiki](https://sh.wikipedia.org/wiki/Uzemljenje)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/9/91/Earth_Ground.svg/158px-Earth_Ground.svg.png)

Simbol uzemljenja je duga linija s tri horizontalne crte na dnu. **Uzemljenje** je veza koja se koristi kao referenca za sve napone u kolu. Naziva se još **nula** ili **masa**. 

Uzemljenje se može prikazati na više načina:
* **Bez simbola uzemljenja**: Uzemljenje je negativan pol baterije.
* **Jedan simbol uzemljenja**: Sve veze sa uzemljenjem slivaju se u jednu tačku. 
* **Više simbola uzemljenja**: Nacrtano nekoliko tačaka uzemljenja. U stvarnom kolu sve te tačke su objedinjene u jednu.

Postoje dva osnovna simbola uzemljenja: 
- klasično uzemljenje (**zemlja** ili **GND**) i 
- uzemljenje na šasiji (**masa**). 

Klasično **uzemljenje** označava vezu sa žicom uzemljenja (obično zelena žica u trožilnom kablu). Uzemljenje na šasiji (**masa**) čine povezane žice u kolu visokog napona. Na starijim uređajima (hi-fi sistem, televizor...) metalna šasija je služila kao zajednička veza sa uzemljenjem, otuda izraz.

## Tačke preseka

Komponente se povezuju žicama ili bakarnim trakama na štampanoj ploči. Na šemama se uglavnom ne pravi razlika između načina povezivanja.

Na složenijim šemama, linije nekad prelaze jedna preko druge. Tačke ukrštanja se prikazuju na sledeči način:
* **nepovezane** žice - prekid ili polukrug.
* **povezane** žice - tačka ili krug.

## Konektori

[wiki](https://sh.wikipedia.org/wiki/Konektor)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/b/bf/ConnectorSymbols.svg/240px-ConnectorSymbols.svg.png)

Za ostvarivanje električnih veza koriste se konektori. **Konektor** je opšti izraz za sve što omogućava lako uspostavljanje i prekidanje veze u kolu. 

Većina električnih konektora ima **pol**: muška komponenta naziva se **utikač**, a ženska **utičnica**. Na primer, utičemo slušalice u utičnicu plejera.

Konektor može biti složen s više izvoda ili prost s dva vijka. Simboli za utičnice, utikače i konektore umnogome se razlikuju od šeme do šeme. 

## Kondenzatori (C)

[wiki](https://sh.wikipedia.org/wiki/Kondenzator)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1c/Types_of_capacitor.svg/320px-Types_of_capacitor.svg.png)

Šematski prikaz kondenzatora oslikava njegovu unutrašnju konstrukciju: dve provodne pločice razdvojene prazninom. 

Kondenzatori mogu biti polarizovani i nepolarizovani. **Polaritet** na kondenzatoru može biti označen plusom ili minusom pored jednog od izvoda.

## Oznake komponenti

Simbole u šemama često prati neka od sledećih oznaka:
* **Identifikaciona oznaka**, na primer ,,R1“ ili ,,Q3“. Prihvaćeno je da se za tip komponente koristi slovo. Ako postoji više komponenti istog tipa, numerišemo ih (R3, na primer).
* **Kataloški broj** se koristi ako je komponenta standardna, obično tranzistor ili integrisano kolo. Na primer, oznaka može biti 2N2222 (često koriščen tranzistor) ili 555 (čip za merenje vremena).
* **Vrednost** se najčešće navode za otpornike i kondenzatore.

Najčešće se koriste sledeće skraćenice za komponente:

- **R** - otpornik
- **C** - kondenzator 
- **D** - dioda
- **L** - Induktivni kalem
- **T** - transformator
- **Q** - tranzistor
- **IC** (ili **U**) - integrisano kolo
- **LED** - svetleća dioda
- **RLY** - relej
- **XTAL** - kristal
