# Merenja multimetrom

Multimetar se koristi za brojna merenja u elektronici. Pomoću multimetra se meri:

* **napon** (jednosmerni i naizmenični)
* **struja**
* **otpor**
* **kontinuitet** (je li kolo čitavo ili prekinuto)

Svaki multimetar ima par mernih kablova (**crni** za uzemljenje, **crveni** za pozitivni pol), sa metalnom sondom ili pipalicom na kraju. Neki multimetri, na primer, imaju i mogućnost ispitivanja dioda, kondenzatora i tranzistora.

Prilikom merenja ne dodirujte sonde prstima, jer otpor tela može da poremeti merenje.

Ako kolo emituje oscilujuće signale, oni se mogu menjati prebrzo pa ih ne možemo meriti multimetrom. Oprema za merenje brzomenjajućih signala su logička sonda i osciloskop.

## Merenje napona

Multimetar na DC V.

- **Merenje napona kola.** Kada merimo napon celog kola kačimo multimetar za napajanje (crnu sondu na negativni, a crvenu na pozitivni pol napajanja).
- **Merenje napona komponente.** Napon komponente (ili **pad napona**) je razlika električnog potencijala između njena dva priključka. Kada merimo napon komponente kačimo multimer za njene nožice. Tako proveravamo napaja li se komponenta odgovarajućim naponom. 
- **Merenje napona baterije**. Crna sonda na minus baterije, crvena na plus. Precizniji su rezultati kada se baterija meri pod opterećenjem (sa prikačenim potrošačem).

## Merenje struje

Multimetar na A (DC ili AC).

- **Merenje struje kroz kolo.** Da bismo izmerili ukupnu struju koju kolo crpi, potrebno je redno vezati multimetar u kolo. Dakle prekinuti kolo na mestu gde merimo, pa povezati multimetar kao most, tako da struja prolazi kroz njega. Za jednosmernu struju crvena sonda ide ka plus strani izvora, crna ka minus (ako obrnemo instrument samo pokaže negativan znak, ali merenje ostaje tačno.).

Ako je redna veza, struja svake komponente je jednaka. Ako je paralelna veza, svaka grana ima svoju struju. Za merenje moramo ubaciti multimetar samo u jednu granu. Tako merimo struju koja teče kroz samo jednu granu odnosno komponentu.

Ako kroz kolo protiče prejaka struja, komponente mogu pregoreti.

> Oprez, mnogi multimetri mere struju samo do određene jačine!

## Merenje otpora

Multimetar na Ω.

Otpor se meri kada je kolo isključeno. Možemo meriti otpor celog kola ili neke komponente - žice, otpornika, motora i slično. Stavi sonde na krajeve te komponente i očitaj vrednost otpora.

Otpor, ili njegov izostanak, ukazuje na kratke spojeve ili otvorena kola. Kratak spoj ima otpor (skoro) nula, dok je otpor otvorenog kola beskonačan. Testove kontinuiteta koristimo za pronalaženje prekida u žicama.

Pomoću multimetra možemo obaviti još neka merenja zasnovana na otporu:
* **Osigurač**: Pregoreli osigurač daje otvoreno kolo.
* **Prekidač**: Uključen prekidač ima vrednost otpora nula (kratak spoj), a isključen beskonačno (otvoreno kolo).
* **Lemni spoj**: Neispravan lemni spoj ima beskonačan otpor (otvoreno kolo). Isto važi za spoj na štampanoj ploči.

## Ispitivanje kontinuiteta

Multimetar na režim za kontinuitet (*Continuity* ili *Tone*), koji obično uključuje zvučni signal.

Ispitivanjem kontinuiteta proveravamo je li kolo povezano (zatvoreno) ili nije:
* Kratak spoj pokazuje da postoji veza između dve tačke. Multimetar to prikazuje kao otpor 0 oma. Ako veza ima kratak spoj, multimetar će se oglasiti zvučnim signalom.
* Otvoreno kolo znači da postoji prekid. Multimetar to prikazuje kao beskonačan otpor.

Ispitivanje žica:
* Ispitivanje kontinuiteta žice. Povežite sonde s krajevima žice. Trebalo bi da očita otpornost blizu 0 oma.
* Ispitivanje kratkog spoja između žica koje ne bi trebalo da su povezane. Povežite sonde s ogoljenim krajem dveju žica. Trebalo bi da očita gotovo beskonačnu otpornost. Ako očita 0 verovatno postoji kratak spoj.

### Čak i žica pruža otpor

Zašto multimetar ne pokazuje nula oma kada ispitujete žicu, posebno dugačku? Sva električna kola suprotstavljaju se toku elektrona. Čak i kratki komadi žice imaju otpornost, ali je ona obično manja od jednog oma i nije važna za ispitivanje kontinuiteta.

Što je žica duža, otpornost je veća, posebno ako je prečnik mali. S druge strane, što je žica deblja, otpornost je manja.

## Ispitivanje prekidača i preklopnika

* Kada je prekidač ili preklopnik isključen, multimetar bi trebalo da pokaže beskonačnu otpornost.
* Kada je prekidač ili preklopnik uključen, multimetar bi trebalo da pokaže nula oma. 

Najjednostavniji prekidač je **jednopolni (običan)**. Ima dva izvoda: ulaz i izlaz. On omogućava ili sprečava proticanje struje, zavisno od položaja. Jednopolni prekidači (i preklopnici) uključuju/isključuju samo jedan deo kola. **Dvopolni** prekidač je zadužen za dva zasebna kola (recimo jedno napona 12 volti i drugo 5 volti). Ovi prekidači mogu da budu tipa uključeno-uključeno ili da imaju središnji položaj tipa uključeno-isključeno-uključeno. 

Prekidače ćemo najlakše ispitati kada nisu u kolu. Ako prekidač u kolu postavimo u isključen položaj, multimetar možda neće pokazati beskonačnu otpornost. Preklopnik često nema položaj isključeno, već samo dva položaja uključeno. Njega možemo ispitati kao da je reč o dva prekidača.

Položaj i funkcija izvoda prekidača mogu da se razlikuju, pa ćete eksperimentisanjem otkriti razlike.

## Ispitivanje osigurača

Ako kolo počne da crpi previše struje, može da se pregreje, zapali i izazove požar. Osigurač štiti elektronsko kolo, tako što pregori kada struja kroz njega premaši dozvoljenu jačinu. Osigurač može da pregore i iz drugih razloga, kao što je naponski udar usled udara groma.

Da proverite osigurač, birač multimetra postavite u položaj za merenje otpora. Krajeve osigurača dodirnite sondama. Očitana vrednost bi trebalo da bude 0 (nula) oma. Ukoliko multimetar pokaže beskonačnu otpornost, osigurač je pregoreo i morate ga zameniti.

## Vizuelno ispitivanje

Pošto je cilj ispitivanja utvrđivanje da li je komponenta ispravna, prvo je osmotrite. U nekim slučajevima, već na prvi pogled se vidi da je uništena. Kad komponenta izgleda kao da je spržena, sigurno je pregorela. Ako se neka elektronska komponenta pregreje - obično zbog prejake struje - može da se istopi ili eksplodira. Kada otkrijete spaljenu komponentu, neophodno je da saznate zašto je pregorela kako bi sprečili da se to ponovi.

Oštećene komponente ćete otkriti ako potražite sledeće znake:
* Kod **otpornika**, pogledajte ima li uočljivo ispupčeno središte, promenjene boje.
* Kod **kondenzatora**, proverite postoji li ispupčenje na vrhu ili krajevima i curi li nešto (elektrolit).
* Na **diodi**, **tranzistoru** ili **integrisanom kolu** potražite očigledne promene boje na štampanoj ploči.
* Nemojte prevideti komponentu koja se raspala.

Naravno, komponenta može biti oštećena čak i bez vidljivih znakova pregorevanja. Zato vizuelno ispitivanje koristimo samo za pronalaženje očiglednih oštećenja a ne za konačan sud o ispravnosti komponente.

> Izbegavajte kontakt sa sirupastom tečnošću iz elektrolitskog kondenzatora. Može da vas opeče. Odmah operite ruke toplom vodom i sapunom ako dodirnete tu tečnost. Ne dozvolite da vam kapne u oči! Ukoliko se to dogodi, dobro isperite oči mlazom vode i zatražite hitnu medicinsku pomoć.

## Ispitivanje otpornika

Otpornici ograničavaju tok struje ili dele napon u kolu. Oni imaju vrlo različite otpornosti. 

Otpornike možete ispitati multimetrom na sledeći način:
1. Podesite multimetar za merenje otpornosti. Počnite s visokim opsegom pa ga postepeno smanjujte.
2. Postavite sonde na krajeve otpornika. Ne dodirujte izvode prstima, jer ćete usled otpornosti tela dobiti netačan rezultat.
3. Izmerite otpornost i zabeležite očitavanje.

Neispravan otpornik može da daje znake otvorenog kola (multimetar prikazuje beskonačnu otpornost) ili kratkog spoja (multimetar pokazuje nula oma).

Kada ispitate otpornik, proverite i da li se otpornost koju prikazuje multimetar slaže s vrednošću na samom otporniku. Očitavanje mora da bude u granicama tolerancije otpornika. Na primer, ako otpornik ima toleranciju od 10 procenata a nominalna otpornost je 1K oma, prihvatljivi rezultati merenja moraju da budu u opsegu od 900 do 1100 oma.

## Ispitivanje potenciometara

![](slike/merenje-potenciometra.jpg)

Potenciometar je promenljivi otpornik. Sonde multimetra se povezuju za izvode. Kada su sonde postavljene u tačke 1 i 2, okretanjem birača u jednom smeru otpornost se povećava. Kada su sonde postavljene u tačke 2 i 3, okretanjem birača u drugom smeru otpornost se smanjuje.

Dok okrećete osovinu potenciometra, pratite šta multimetar pokazuje i uočite svaku naglu pramenu otpornosti, jer ona ukazuje na oštećenje u unutrašnjosti potenciometra. U tom slučaju, zamenite potenciometar.

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
