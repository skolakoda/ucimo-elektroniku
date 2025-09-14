# Multimetar

[wiki](https://sh.wikipedia.org/wiki/Multimetar)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a6/Digital_Multimeter_Aka.jpg/240px-Digital_Multimeter_Aka.jpg)

Tokom pravljenja ili popravke kola, moramo vršiti određena merenja da bi proverili rade li komponente kako treba. **Multimetar** je prvi i verovatno jedini merni uređaj koji će nam ikad zatrebati. Pomoću njega možemo ne samo proveriti napon u kolu, već i postoji li negde kratak spoj ili prekinuta veza između komponenti.

Recimo da smo imamo električno kolo koje ne radi. Pomoću multimetra ustanovićemo koja je komponenta uzrok problema. Možemo izmeriti napon, otpor i struju u različitim tačkama kola. Na primer, ako je napon u jednoj tački 5 volti, a u drugoj neočekivano padne na 0, uzrok problema je negde između te dve tačke.

## Osnovna merenja

Multimetar se koristi za brojna merenja u elektronici. Pomoću njega možemo meriti:

* napon (jednosmerni i naizmenični)
* jačinu struje
* otpor
* kontinuitet (je li kolo čitavo ili prekinuto)

Svaki multimetar ima par mernih kablova (**crni** za uzemljenje, **crveni** za pozitivni pol), sa metalnom sondom ili pipalicom na kraju. Neki multimetri, na primer, imaju i mogućnost ispitivanja dioda, kondenzatora i tranzistora.

### Merenje struje i napona

Napon i struja se mere kada je kolo priključeno na izvor napajanja. U uobičajena merenja spadaju:
* **Merenje napona baterije**. Precizniji su rezultati kada se baterija meri pod opterećenjem.
* **Crpi li kolo previše struje**. Ako kroz kolo protiče prejaka struja, komponente mogu pregoreti.
* **Napaja li se komponenta odgovarajućim naponom**. Te provere će vam pomoći da pronađete uzrok problema u kolu.

### Merenje otpora

Otpor se obično meri kada je kolo isključeno. Možemo meriti otpor celog kola ili neke komponente - žice, otpornika, motora i mnogih drugih.

Otpor, ili njegov izostanak, ukazuje na kratke spojeve ili otvorena kola. Kratak spoj ima otpor (skoro) nula, dok je otpor otvorenog kola beskonačan. Testove kontinuiteta koristimo za pronalaženje prekida u žicama.

Pomoću multimetra možemo obaviti još neka merenja zasnovana na otporu:
* **Osigurač**: Pregoreli osigurač daje otvoreno kolo.
* **Prekidač**: Uključen prekidač ima vrednost otpora nula (kratak spoj), a isključen beskonačno (otvoreno kolo).
* **Lemni spoj**: Neispravan lemni spoj ima beskonačan otpor (otvoreno kolo). Isto važi za spoj na štampanoj ploči.

### Zvučni signal pri ispitivanju kontinuiteta

Neki multimetri se tokom ispitivanja kontinuiteta oglašavaju zvučnim signalom. Da bi to koristili, postavite birač radnog režima na *Continuity* ili *Tone*. Zvučno oglašavanje će nam koristiti kada proveravamo veze u kolu. Ako veza ima kratak spoj, multimetar će se oglasiti zvučnim signalom.

## Digitalni ili analogni multimetar?

Postoje dve vrste multimetara: digitalni i analogni.
* **Digitalni multimetri** imaju digitalni displej.
* **Analogni multimetri** izmerene vrednosti prikazuju kretanjem kazaljki.

Generalno, analogni multimetri se teže koriste jer je neophodno izabrati tip ispitivanja (napon, struja, otpor) i opseg merenja. Zatim treba pročitati rezultate na odgovarajućoj skali i proceniti pravu izmerenu vrednost jer kazaljka stalno „podrhtava". Nasuprot tome, digitalni multimetri prikazuju rezultat kao tačan broj, pa korisnik ne treba ništa da nagađa.

## Saveti za bezbednost 

Ako ispitujemo visok napon iz gradske mreže nepažljivo korišćenje multimetra može izazvati ozbiljne povrede. Čak i ako ne ispitujemo visoki napon, možemo biti izloženi opasnoj struji ako radimo sa uređajima kao što su radio-prijemnik, stereo uređaj ili video-rikorder. Svi oni imaju u sebi velike elektrolitske kondenzatore koji mogu sadržati desetine ili stotine volti i nakon što je uređaj isključen iz struje.

- **Držite prste podalje od sondi multimetra!** Ako pipnete provodnik kroz koji prolazi naizmenična struja možete se ozbiljno ozlediti pa čak i poginuti. 
- **Ne postavljajte sonde naslepo po kolu** da bi očitali neku vrednost, već samo na one delove kola koji su vam poznati. 
- **Držite jednu ruku u džepu**. Pričvrstite crnu sondu na uzemljenje, jednom rukom koristite crvenu sondu, a drugu bezbedno držite u džepu.

## Delovi multimetra

Glavni elementi tipičnog multimetra su:
* **Indikator** sa skalama ili digitalni displej: Analogni multimetri imaju indikator s nekoliko označenih skala i kazaljku koja pokazuje izmerene vrednosti. Digitalni multimetar ima digitalni displej s brojčanim očitavanjem.
* **Birač funkcija**: Postavite birač u odgovarajući položaj za merenje koje želite da obavite: napon, struja, otpor... Na multimetrima koji nemaju funkciju automatskog biranja opsega, pomoću birača morate izabrati i opseg vrednosti (maksimalnu vrednost). Ako je podešena maksimalna vrednost veća od najveće vrednosti koju možete da dobijete merenjem sigurni ste da će merenje biti najpreciznije moguće.
* **Priključci za merne kablove**: Svaki multimetar ima najmanje dva priključka za merne kablove `+` (pozitivan) i `-` (negativan). Merni kablovi se uključuju u njih. Neki multimetri imaju i dodatne ulaze za merenje jakih struja (koji su obično označeni slovom `A`, od amperaža) i specijalna ležišta za ispitivanje tranzistora i kondenzatora.
* **Dugme za podešavanje nule**: Na analognim multimetrima bez automatskog podešavanja, postoji obrtno dugme kako bi kazaljku postavili tačno na nula oma pre merenja otpornosti. Neki digitalni multimetri imaju dugme koje, kada ga pritisnete, podešava uređaj na nulu.

## Preciznost, rezolucija i osetljivost

Na primer, **preciznost** multimetra može biti +0,8%. Greška od 0,8 procenata kod napona jednosmerne struje - obično od 5 do 12 volti - iznosi samo oko 0,096 volti. Za kućne elektronske projekte, veća preciznost nije potrebna.

Digitalni multimetri imaju i karakteristiku koja se naziva **rezolucija**. Broj cifara na displeju određuje najmanju promenu koju multimetar može da prikaže. Većina digitalnih hobi multimetara ima rezoluciju od 3 1/2 cifre, pa mogu da prikažu vrednost od 0,001 (polovina cifre se pojavljuje kao jedinica na levom kraju displeja). Zato ti multimetri ne mogu precizno da prikažu vrednosti manje od 0,001.

Rezolucija digitalnih multimetara je takođe funkcija njihovih analogno-digitalnih pretvarača (ADC). Taj pretvarač prevodi analogni signal u digitalni. Mnogi multimetri za amatersku primenu koriste 12-bitni analogno-digitalni pretvarač, koji može bilo koji analogni signal da prevede u 4096 diskretnih koraka (u digitalnom svetu ne postoje vrednosti „između“ ili „približno“).

**Osetljivost** je najmanja vrednost koju multimetar može da izmeri.
* Kvalitetni digitalni multimetri imaju maksimalnu osetljivost od oko jednog mikrovolta, što je milioniti deo volta. Što je vrednost manja, osetljivost je veća.
* Kvalitetni analogni multimetri imaju maksimalnu osetljivost od oko 20.000 oma po voltu, što se obično prikazuje kao 20 KΩ/V. Što je vrednost u omima veća, to je veća i osetljivost.

## Dobro opremljen multimetar

Multimetar se obično ne isporučuje s mnogo pribora, ali je ipak potrebno da imate nešto od dodataka i pratećeg pribora.

### Uputstvo za korisnike

Uputstvo za multimetar može biti samo jedan list papira na kojem se nalazi slika i nešto malo teksta, ili knjižica sa instrukcijama tipa „korak po korak". Bez obzira na vrstu uputstva, obavezno ga barem prelistajte. 

### Merni kablovi

Merni kablovi koji se dobijaju s jeftinijim multimetrima nisu toliko kvalitetni, pa bi možda trebalo nabaviti bolje. Dobar izbor su spiralni kablovi koji mogu da se rastegnu i do metar dužine.

Standardni kablovi sa šiljatim metalnim pipalicama prikladni su za većinu rutinskih ispitivanja, ali ćete ponekad morati da upotrebite kablove koje imaju štipaljke. Te štipaljke služe za pričvršćivanje sondi kako bi ruke bile slobodne.

Ako ih uz multimetar niste dobili, možete kupiti štipaljke koje se naknadno postavljaju na standardne sonde.

## Maksimalna vrednost: koliko je dovoljno?

Postoji granica koje multimetri mogu da mere. Ta granica se zove **maksimalni opseg**. Savremeni multimetri uglavnom imaju manje ili više isti maksimalni opseg za merenje napona, struje i otpornosti. Svaki multimetar koji ima sledeće maksimalne opsege trebalo bi da bude dobar za hobi:

* naizmenični napon: 1000 V
* jednosmerni napon: 500 V
* naizmenična struja: 200 mA (miliampera)
* otpor: 2 MΩ (dva megaoma ili dva miliona oma)

### Šta ako morate da merite jače struje?

Većina digitalnih multimetara može da meri samo struju jačine do jednog ampera. Tipičan digitalni multimetar ima maksimalan opseg od 200 miliampera. Svaki pokušaj da se izmeri znatno jača struja može izazvati pregorevanje osigurača u multimetru. Mnogi analogni multimetri, posebno stariji modeli, podržavaju merenje struje jačine od 5 do najviše 10 ampera.

Ako imate samo digitalni multimetar sa ograničenim opsegom merenja jačine struje, ipak možete meriti jače struje indirektno, koristeći otpornik male otpornosti i velike snage.

## Automatsko biranje opsega

Na većini analognih multimetara, kao i na mnogim digitalnim, morate da izaberete opseg merenja da bi se prikazali precizni rezultati merenja. Primera radi, ako merite napon baterije od 9 volti, opseg podešavate na naredni veći od 9 volti. To kod većine multimetara znači da treba izabrati opseg od 20 ili 50 volti. Obavezno očitajte rezultat sa odgovarajuće skale. Ako ste izabrali, na primer, opseg od 20 volti, morate koristiti i skalu od 20 volti. U suprotnom, dobićete netačne rezultate.

Ručno podešavanje opsega multimetra nije mnogo složeno. Međutim, danas je automatsko biranje opsega kod digitalnih multimetara uobičajena funkcija. Zato se oni mnogo lakše koriste, a manja je mogućnost da se rezultat pogrešno očita. Kada želite da merite napon, birač postavljate u odgovarajući položaj i merite. Zato na multimetrima sa automatskim podešavanjem opsega ne postoji zasebno dugme za biranje opsega.

Bez obzira da li je multimetar analogan ili digitalan, on ukazuje na prekoračenje granice ako je veličina koja se meri prevelika da bi je aparat prikazao. Na digitalnom multimetru se prekoračenje prikazuje kao trepćuća jedinica (ili slovima OL). Na analognim multimetrima, prekoračenje se prikazuje tako što kazaljka izlazi van skale. Ukazivanje na prekoračenje je često kada se ispituje kontinuitet. To znači da je otpor prevelika da bi je multimetar registrovao, čak i kada je izabran maksimalni opseg.

Kada koristite analogni multimetar, izbegavajte prekoračenja jer se tako može narušiti preciznost kretanja kazaljke. Uvek birajte najveći opseg koji će odgovarati merenju i tek nakon toga započnite merenje.

## Dodatne korisne funkcije

Neki multimetri imaju različite funkcije i mogućnosti po kojima se razlikuju. Evo nekih dodatnih funkcija:
* **Ispitivanje rada kondenzatora i merenje kapacitivnosti**. Pošto merni kablovi i sonde mogu da utiču na očitavanje vrednosti kapacitivnosti, većina multimetara koji mogu da mere kapacitivnost imaju zasebno ležište. Umetnite kondenzator u to ležište i zatim izmerite njegovu kapacitivnost.
* **Ispitivanje ispravnosti diode**. Na digitalnim multimetrima s tom funkcijom postoji poseban položaj birača koji služi za ispitivanje dioda. Imajte na umu da pomoću većine analognih multimetara možete ispitati rad diode, koristeći skalu za male otpornosti.
* **Proveravanje ispravnosti tranzistora**. I analogni i digitalni multimetri mogu da obave jednostavno ispitivanje bipolarnih tranzistora. Kada se koristi analogni multimetar, tranzistori se ispituju na isti način kao diode. Na digitalnim multimetrima, tranzistori se ispituju uz korišćenje odgovarajućeg, označenog ležišta za tranzistore.

## Podešavanje multimetra

Pre nego što počnete da koristite multimetar, morate se uveriti da pravilno radi. Svako odstupanje u radu daje pogrešne rezultate merenja, a da vi to možda nećete ni primetiti. Proverite napon baterija i zamenite ih kad treba. Koristite nove alkalne baterije. 

Da bi ispitali multimetar, pratite sledeće korake:
1. Uključite multimetar i birač postavite u položaj za merenje otpornosti (Ω). Ako nema funkciju automatskog biranja opsega, postavite ga na opseg male otpornosti.
2. Priključite oba kabla u odgovarajuće konektore multimetra a zatim sastavite vrhove sondi.
3. Multimetar bi trebalo da pokaže 0 (nula) oma ili vrlo blisku vrednost.

Ako multimetar nema funkciju automatskog podešavanja nule, pritisnite dugme *Adjust* (ili *Zero Adjust*). Na analognim multimetrima okrećite dugme *Zero Adjust* sve dok se kazaljka ne postavi na nulu. Držite sastavljene sonde nekoliko sekundi dok se multimetar automatski ne postavi na nulu.

Kada proveravate multimetar, trebalo bi da vodite računa o sledećem:
* **Ne dodirujte sonde prstima** dok ispitujete multimetar. Otpor tela može da poremeti merenje.
* **Proverite da li su vrhovi sondi čisti**. Prljave ili zarđale sonde mogu da budu uzrok pogrešnih rezultata merenja. Očistite ih sredstvom za čišćenje elektronskih kontakata. Očistite i krajeve sondi, konektore na kablovima i, ako je potrebno, konektore na samom multimetru.
* **Dvaput proverite položaj birača multimetra**. Uverite se da je podešen za merenje otpornosti.
Možete smatrati da je multimetar kalibrisan ako prikazuje otpor od nula oma kada su sonde spojene. Ovaj postupak primenite pre svakog korišćenja multimetra, posebno ako ga isključujete između merenja.

## Eksperiment: Merenje otpornosti vode

Multimetar možete upotrebiti za izvođenje jednostavnog naučnog eksperimenta kojim se demonstrira postupak merenja otpornosti, i pokazuje koliko primesa ima u vodi koju pijete. To čete izvesti na sledeći način:
1. Uzmite dve čiste čaše.
2. Isperite ih destilovanom vodom. Destilovanu vodu možete kupiti u svakoj samoposluzi.
3. Jednu čašu napunite destilovanom vodom, a drugu običnom.
4. Podesite multimetar za merenje otpornosti. Podesite ga na prilično velik opseg, recimo 200 kilooma ili više.
5. Gumicom za tegle spojite izolovane ručice sondi. Uverite se da se metalni delovi sondi ne dodiruju.
6. Uronite sonde u čašu s destilovanom vodom. Zabeležite rezultat i - po potrebi - smanjite opseg merenja.
7. Nakon toga uronite sonde u čašu sa običnom vodom. Zabeležite dobijeni rezultat.

U osnovnoj školi ste naučili da voda provodi elektricitet. Ta tvrdnja nije sasvim tačna. Voda bez primesa je izolator; elektricitet provode minerali rastvoreni u vodi. Destilovana voda sadrži malo minerala, pa ima vrlo veliku otpor. U zavisnosti od toga gde živite, voda iz vodovodne mreže može da sadrži mnogo soli i minerala, pa je zato njena provodnost veća.
