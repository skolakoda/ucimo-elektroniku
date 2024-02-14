# Električna šema

Zamislite da umesto elektronskog uređaja pravite drvenu kućicu za odmor. Pre nego što počnete radove, treba da napravite projekat, tj. nacrt kućice. Upravo to je električna šema: nacrt elektronskog kola, koje čini osnovu svakog uređaja.

![](https://upload.wikimedia.org/wikipedia/commons/9/9a/LEDCircuit.PNG)

## Čitanje električnih šema

Šematski dijagrami nam pokazuju kako su povezane elektronske komponente u kolu. Na šemama se veze prikazuju simbolima koji predstavljaju komponente i linijama koje predstavljaju način njihovog povezivanja.

Ako odlučite da se ozbiljno bavite elektronikom, pre ili kasnije ćete morati da naučite kako se čitaju šeme. No, jezik šema nije tako težak. Na većini šematskih dijagrama koristi se tek desetak simbola za komponente, kao što su otpornici, kondenzatori i tranzistori.

Šematski dijagrami umnogome liče na mape i auto-karte na kojima linije povezuju mesta ili predele. Dok se na mapama linije koriste za povezivanje tačaka i zvezdica koje predstavljaju naselja i gradove, na šemama se linije koriste za povezivanje simbola koji predstavljaju otpornike, tranzistore i kondenzatore koji čine neko električno kolo.

Šeme imaju dve osnovne svrhe:
* Pokazuju kako da reprodukujete kolo. Prepoznavanjem simbola i praćenjem njihovih međusobnih veza, možete napraviti kolo prikazano na šemi.
* Omogućavaju da razumete kako kolo radi. Zbog toga ćete, ako zatreba, na pravi način moći da popravite neispravno kolo ili zamenite komponentu.

U šemama se uglavnom poštuju standardne konvencije. One se mogu razlikovati na osnovu vremena kada su nastale, zemlje porekla, konvencije projektanta i drugih činilaca.

# Šematski simboli

![](https://upload.wikimedia.org/wikipedia/commons/c/cb/Circuit_elements.svg)

U savremenim šemama elektronskih kola koristi se nekoliko stotina simbola, dok se u starijim kolima koristi još više simbola, medu kojima su oni za vakuumske cevi i druge komponente. Ipak, neophodno je da zapamtite samo nekoliko desetina simbola. Ostale možete potražiti u priručnicima kad ih vidite na nekoj šemi.

Simbole delimo u četiri kategorije;
* **Osnovni** šematski simboli: masa i uzemljenje, tačke spajanja, ulazi i izlazi.
* Elektronske **komponente**: otpornici, tranzistori, diode i prigušnice.
* **Logički** simboli: kola I, ILI, NILI i NE (invertori).
* **Razni** drugi simboli: prekidači, sijalice i ostali hardver.

Osnovni šematski simboli predstavljaju mehaničke aspekte kola, kao što su napajanje, mesta i načini povezivanja i svi konektori, utikači i terminali.

## Napajanje i uzemljenje

Simbol napajanja liči na štapić s kružićem na vrhu. Simbol uzemljenja je duga linija s tri horizontalne crte na dnu. Kolo može da se napaja iz izvora naizmenične struje (AC), kao što je utičnica u zidu, ili iz izvora jednosmerne struje (DC), kao što je baterija ili izlaz adaptera ili transformatora. Uzemljenje je veza koja se koristi kao referenca za sve napone u kolu.

Evo kako šeme mogu da izgledaju u zavisnosti od izvora napajanja:
* U elektronskim kolima koja se napajaju iz gradske električne mreže, obično se koristi interno napajanje koje smanjuje napon od 220 volti i pretvara ga u jednosmerni napon. Taj niži, jednosmerni napon napaja komponente u kolu. Ako, na primer, pred sobom imate električnu šemu video rikordera ili nekog drugog uređaja koji se napaja iz gradske električne mreže, na njoj je verovatno prikazano i naizmenično i jednosmerno napajanje.
* U kojima koja se napajaju jednosmernim naponima, na šemi se nalazi jedan ili više izvora napajanja, kao što su +5 V, +12 V pa čak i +5/-12 V. Ako na šemi nije naveden napon, često se radi o napajanju od 5 V. Ukoliko izričito nije navedeno drugačije, napon na šemi je skoro uvek jednosmeran.

Za sve električne veze neophodne su najmanje dve žice: jedna za napajanje, druga za uzemljenje. Nekada se uzemljenje naziva i nula ili masa. Uzemljenje u kolu može se prikazati na više načina:
* Bez simbola uzemljenja: U kolima koja se napajaju iz baterija, uzemljenje je negativan pol baterije.
* Jedan simbol uzemljenja: Sve veze sa uzemljenjem slivaju se u jednu tačku. Ne prikazuje se izvor napajanja, ali se uzemljenje uvek povezuje s negativnim polom baterije ili jednosmernog izvora napajanja.
* Više simbola uzemljenja: Na složenijim šemama obično je lakše nacrtati kolo s nekoliko tačaka uzemljenja. U stvarnom kolu sve te tačke su objedinjene u jednu.

Postoje dva osnovna simbola uzemljenja: klasično uzemljenje (zemlja) i uzemljenje na šasiji (masa). Iako se ti simboli na šemama koriste ravnopravno, oni zapravo imaju različita značenja. Uzemljenje označava vezu sa žicom uzemljenja u kućnom električnom sistemu. Na primer, za uzemljenje se koristi treća (obično zelena) žica u trožilnom kablu. S druge strane, uzemljenje na šasiji (masa) čine povezane žice u kolu visokog napona. Izraz je nastao zbog toga što je na starijim uređajima (hi-fi sistem, televizor...) metalna šasija služila kao zajednička veza sa uzemljenjem. Danas se metalna šasija retko koristi za vezu sa uzemljenjem, ali se, bez obzira na to, izraz „masa“ i dalje upotrebljava.

## Međuveze

Komponente se u kolu povezuju izolovanim žicama ili tankim bakarnim trakama na štampanoj ploči. Na šemama se uglavnom ne pravi razlika između načina povezivanja. To potpuno zavisi od toga kako ste odlučili da napravite kolo.

Na složenijim šemama neke linije moraju da prelaze jedna preko druge. Zato je neophodno da znate kada ukrštene linije predstavljaju vezu dve žice, a kada ne. Na idealnoj šemi, povezane i nepovezane žice prikazujete na sledeči način:
* Prekid ili polukrug predstavljaju nepovezane žice.
* Tačka ili krug na mestu preseka dve žice označava da su one povezane.

## Utikači, utičnice i konektori

Dvožična i oklopljena utičnicu su dva najčešća tipa utičnica koja se koriste u elektronici. Većina elektronskih kola na neki je način u interakciji sa spoljnim svetom. Uzmimo kao primer pojačalo za gitaru. Ono mora imati utičnicu da bi mogli priključiti gitaru.

Za ostvarivanje veza najčešće se koriste sledeće komponente:
* Utičnica i utikač: To je odlično usklađen par pošto utičnica prima utikač. Na primer: uključiti slušalice u utičnicu plejera.
* Konektor: Konektor je opšti izraz za sve što omogućava lako uspostavljanje i raskidanje veza u kolu. Konektor može biti sklop s više ležišta ili jednostavan priključni blok s dva vijka.

Simboli za utičnice, utikače i konektore umnogome se razlikuju od šeme do šeme. 

## Oznake koje prate simbole

Simboli komponenti „ne vole“ da su sami, pa svaki simbol na šemi prati neka od sledećih oznaka:
* Identifikaciona oznaka, na primer ,,R1“ ili ,,Q3“. Prihvaćeno je da se za tip komponente koristi slovo. Obično se R koristi za otpornik, C za kondenzator, D za diodu, L za induktivni kalem, T za transformator, Q za tranzistor, U ili IC za integrisano kolo. Ako u kolu postoji više komponenti istog tipa, brojčani dodatak (R3, na primer) identifikuje komponentu.
* Kataloški broj: Koristi se ako je komponenta standardna, obično ako je reč o tranzistoru ili integrisanom kolu. Na primer, ta oznaka može biti 2N2222 (često koriščen tranzistor) ili 555 (tip integrisanog kola za merenje vremena).
* Vrednost: Vrednosti se najčešće koriste za otpornike i kondenzatore. Na primer, kada se koristi neki otpornik, vrednost otpora u omima, kiloomima (hiljadama oma) ili megaomima (milionima oma) može biti navedena.

## Kondenzatori (C)

Šematski prikaz kondenzatora oslikava njegovu unutrašnju konstrukciju: dve provodne pločice razdvojene prazninom. Taj prostor i njegov sadržaj naziva se dielektrik. Dielektrik može biti vazduh, tečnost ili neki oblik izolatora (plastika ili liskun).

Kondenzatori mogu biti polarizovani i nepolarizovani. Na kondenzatoru polaritet može biti označen ili znakom plus ili minus pored jednog od dva izvoda.

## Skraćenice

Najčešće se koriste sledeće skraćenice ili slova:
- C - kondenzator 
- D - dioda
- IC (ili U) - integrisano kolo
- L - Induktivni kalem
- LED - svetleća dioda
- Q - tranzistor
- R - otpornik
- RLY - relej
- T - transformator
- XTAL - kristal
