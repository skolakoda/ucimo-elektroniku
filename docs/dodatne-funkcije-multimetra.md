# Dodatne funkcije multimetra

Neki multimetri imaju i dodatne funkcije, poput:
* **Ispitivanje diode**. Na digitalnim multimetrima s tom funkcijom postoji poseban položaj birača koji služi za ispitivanje dioda. I pomoću većine analognih multimetara možete ispitati rad diode, koristeći skalu za male otpornosti.
* **Ispitivanje tranzistora**. Kada se koristi analogni multimetar, tranzistori se ispituju na isti način kao diode. Na digitalnim multimetrima, tranzistori se ispituju uz korišćenje odgovarajućeg, označenog ležišta za tranzistore.
* **Ispitivanje kondenzatora i merenje kapacitivnosti**. Pošto merni kablovi i sonde mogu da utiču na očitavanje vrednosti kapacitivnosti, multimetri koji mere kapacitivnost imaju zasebno ležište. Umetnite kondenzator u to ležište i zatim izmerite njegovu kapacitivnost.


## Ispitivanje dioda

Dioda je najjednostavniji oblik poluprovodnika. Diode obavljaju mnogo „čudnih“ poslova u elektronskim kolima, uključujući pretvaranje naizmenične struje u jednosmernu, blokiranje napona, ograničavanje napona i osvetljenje. Da li dioda pravilno radi ili ne, možemo proveriti ako imamo digitalni multimetar s funkcijom ispitivanja dioda.

Da bi ispitali diodu multimetrom s funkcijom proveravanja dioda:
1. Postavite birač multimetra u odgovarajući položaj za ispitivanje dioda.
2. Postavite sonde na izvode diode. Vodite računa o polaritetu. Crvenu sondu povežite sa anodom (pozitivni izvod) diode, a crnu s katodom (negativni izvod; katoda je obeležena trakom tako da je lako možete identifikovati). Ne zaboravite da nikako prstima ne smete dodirivati sonde.
3. Očitajte rezultat koji daje multimetar.
4. Zamenite mesta sondama i ispitajte ponovo.

Iako se ovo ispitivanje može koristiti za većinu dioda, ne daje dobre rezultate za svetleće diode - njihovu ispravnost možete proveriti vizuelno.

### Ispitivanje diode pomoću otpornosti

Većinu dioda možete ispitati merenjem otpornosti, na sledeci način:
1. Postavite birač multimetra u položaj za merenje malih otpornosti.
2. Crnu sondu povežite s katodom a crvenu sa anodom diode. Multimetar bi trebalo da prikaže malu otpornost.
3. Zamenite mesta sondama. Multimetar bi trebalo da prikaže beskonačnu otpornost.

## Ispitivanje kondenzatora

Kondenzatori se koriste za skladištenje elektrona na kraći period vremena. Kondenzatori mogu da otkažu zbog brojnih razloga:
* Starosti: Određeni tipovi kondenzatora, uglavnom oni s tečnim elektrolitom, se vremenom isuše i prestaju da rade.
* Previsokog napona: Svi kondenzatori su predviđeni za određen radni napon, a veći ih može oštetiti.
* Pogrešnog polariteta: Polarizovani kondenzator može da se raspadne ako ga pogrešno povežete s kolom.

Kondenzator možete ispitati i multimetrom koji nema specijalnu funkciju za to. Nećete dobiti sve rezultate, ali će vam pomoći da odredite trenutak kada bi trebalo da ga zamenite. Pratite sledeće korake:
1. Pre ispitivanja, otpornikom od 1 ili 2 megaoma spojite izvode kondenzatora. Izvode morate spojiti pošto kondenzatori mogu da zadrže izvesnu količinu naelektrisanja duže vreme. Otpornik sprečava da kondenzator bude kratko spojen, što ga može učiniti neupotrebljivim. 
2. Postavite birač multimetra u položaj za merenje otpornosti.
3. Sondama multimetra dodirnite izvode kondenzatora. Ako radite s polarizovanim kondenzatorom, crnu sondu povežite s negativnim izvodom kondenzatora, a crvenu sondu s pozitivnim. Sačekajte sekundu ili dve i očitajte rezultat. 

Ispravan kondenzator daje beskonačnu otpornost. Otpornost od 0 oma može značiti da je kondenzator u kratkom spoju. Kondenzator koji „curi“ ili gubi sposobnost da zadrži elektricitet, daće rezultat između beskonačnosti i nula oma.

Ovim ispitivanjem nećete moći da utvrdite da li je kondenzator u stanju otvorenog kola, što se događa ako je komponenta strukturno oštećena. Da bi izveli odgovarajuće ispitivanje, morate imati multimetar s funkcijom ispitivanja kondenzatora. Još jedna prednost korišćenja multimetra s funkcijom ispitivanja kondenzatora jeste mogućnost merenja kapacitivnosti.

## Ispitivanje tranzistora

Multimetar možete iskoristiti za ispitivanje većine bipolarnih tranzistora. Tim ispitivanjem nećete dobiti detaljne rezultate, ali možete otkriti neispravan tranzistor. Bipolarni tranzistori su u osnovi dve diode u jednom pakovanju. Zato tranzistor možete ispitati tehnikom za ispitivanje dioda. 

![](slike/poredjenje-tranzistor-dioda.jpg)

Pratite sledeće korake (ako multimetar ima funkciju ispitivanja dioda) da bi otkrili je li tranzistor ispravan:
1. Postavite birač multimetra u položaj za ispitivanje dioda.
2. Povežite sonde multimetra sa izvodima tranzistora.
3. Obavite merenje i zabeležite rezultat. 

U tabeli dati su rezultati koje bi trebalo da očekujete pri ispitivanju ispravnih tranzistora:

Spoj                 | Očitavanje
---------------------|---------------------------
Spoj baza-emiter     | Provodljivost u jednom smeru
Spoj baza-kolektor   | Provodljivost u jednom smeru
Spoj kolektor-emiter | Bez provodljivosti u oba smera

Ispitivanjem multimetrom možete oštetiti neke tipove tranzistora, posebno FET tranzistore! Zato ovom metodom ispitujte samo bipolarne tranzistore. Ako multimetar ima funkciju ispitivanja tranzistora, obavezno ju koristite umesto ove metode.
