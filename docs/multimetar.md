# Multimetar

[wiki](https://sh.wikipedia.org/wiki/Multimetar)

![](https://upload.wikimedia.org/wikipedia/commons/thumb/a/a6/Digital_Multimeter_Aka.jpg/240px-Digital_Multimeter_Aka.jpg)

Tokom pravljenja ili popravke kola, moramo vršiti određena merenja da bi proverili rade li komponente kako treba. **Multimetar** je prvi i verovatno jedini merni uređaj koji će nam ikad zatrebati. Pomoću njega možemo ne samo proveriti napon u kolu, već i postoji li negde kratak spoj ili prekinuta veza između komponenti.

Ako električno kolo ne radi, pomoću multimetra možemo ustanoviti koja je komponenta uzrok problema. Možemo izmeriti napon, otpor i struju u različitim tačkama kola. Na primer, ako je napon u jednoj tački 5 volti, a u drugoj neočekivano padne na 0, uzrok problema je negde između te dve tačke.

## Digitalni ili analogni multimetar?

Postoje dve vrste multimetara: digitalni i analogni.
* **Digitalni multimetri** imaju digitalni displej.
* **Analogni multimetri** izmerene vrednosti prikazuju kretanjem kazaljki.

Generalno, analogni multimetri se teže koriste jer je neophodno izabrati tip ispitivanja (napon, struja, otpor) i opseg merenja. Zatim treba pročitati rezultate na odgovarajućoj skali i proceniti pravu izmerenu vrednost jer kazaljka stalno „podrhtava". Nasuprot tome, digitalni multimetri prikazuju rezultat kao tačan broj, pa korisnik ne treba ništa da nagađa.

## Delovi multimetra

Glavni elementi tipičnog multimetra su:
* **Indikator**: Analogni multimetri imaju indikator s nekoliko označenih skala i kazaljku koja pokazuje izmerene vrednosti. Digitalni multimetar ima displej s brojčanim očitavanjem.
* **Birač funkcija**: Postavite birač u odgovarajući položaj za merenje koje želite da obavite: napon, struja, otpor... Na multimetrima koji nemaju funkciju automatskog biranja opsega, pomoću birača morate izabrati i opseg (maksimalnu vrednost). Ako je podešena maksimalna vrednost veća od najveće vrednosti koju možete da dobijete merenjem tada će merenje biti najpreciznije moguće.
* **Priključci za merne kablove**: Svaki multimetar ima najmanje dva priključka za merne kablove `+` (pozitivan) i `-` (negativan). Neki multimetri imaju i dodatne ulaze za merenje jakih struja (koji su obično označeni slovom `A`) i specijalna ležišta za ispitivanje tranzistora i kondenzatora.
* **Dugme za podešavanje nule**: Na analognim multimetrima postoji obrtno dugme kako bi kazaljku postavili tačno na nula oma pre merenja otpornosti. Neki digitalni multimetri imaju dugme koje, kada ga pritisnete, podešava uređaj na nulu.

## Preciznost multimetra

Na primer, **preciznost** multimetra može biti +0,8%. Greška od 0,8 procenata kod napona jednosmerne struje - obično od 5 do 12 volti - iznosi samo oko 0,096 volti. Za kućne elektronske projekte, veća preciznost nije potrebna.

Digitalni multimetri imaju i karakteristiku koja se naziva **rezolucija**. Broj cifara na displeju određuje najmanju promenu koju multimetar može da prikaže. Većina digitalnih hobi multimetara ima rezoluciju od 3 1/2 cifre (tj. tri pune cifre i jednu koja može biti samo 0 ili 1). Njihov minimalni korak očitavanja je 0,001, pa ne mogu tačno da prikažu vrednosti manje od toga. Rezolucija digitalnog multimetra zavisi i od njegovog analogno-digitalnog pretvarača (ADC). Mnogi hobi multimetri koriste 12-bitni pretvarač, koji prevodi analogni signal u 4096 diskretnih koraka.

**Osetljivost** je najmanja vrednost koju multimetar može da izmeri.
* **Napon**: kvalitetni multimetri imaju maksimalnu osetljivost od oko jednog mikrovolta, što je milioniti deo volta. Što je vrednost manja, osetljivost je veća.
* **Unutrašnji otpor po voltu**: Kvalitetni multimetri imaju maksimalnu osetljivost od oko 20.000 oma po voltu (20 KΩ/V). Što je vrednost u omima veća, to je veća i osetljivost.

### Maksimalni opseg

Postoji granica koje multimetri mogu da mere. Ta granica se zove **maksimalni opseg**. Savremeni multimetri uglavnom imaju manje ili više isti maksimalni opseg za merenje napona, struje i otpornosti. Svaki multimetar koji ima sledeće maksimalne opsege trebalo bi da bude dobar za hobi:

* naizmenični napon: 1000 V
* jednosmerni napon: 500 V
* naizmenična struja: 200 mA (miliampera)
* otpor: 2 MΩ (dva megaoma ili dva miliona oma)

Većina digitalnih multimetara može da meri samo struju jačine do jednog ampera. Tipičan digitalni multimetar ima maksimalan opseg od 200 miliampera. Svaki pokušaj da se izmeri znatno jača struja može izazvati pregorevanje osigurača u multimetru. 

Ako imate multimetar sa ograničenim opsegom merenja jačine struje, ipak možete meriti jače struje indirektno, koristeći otpornik male otpornosti i velike snage.

## Podešavanje multimetra

Pre upotrebe multimetra mora biti pravilno podešen, inače daje pogrešne rezultate merenja. Koraci su sledeći:
1. Uključite multimetar i birač postavite u položaj za merenje otpora (Ω). Ako nema automatsko biranja opsega, postavite na opseg male otpornosti.
2. Priključite oba kabla i sastavite vrhove sondi.
3. Multimetar bi trebalo da pokaže 0 oma ili vrlo blisku vrednost.

Multimetar je kalibrisan ako prikazuje otpor od nula oma kada su sonde spojene. Ako multimetar nema funkciju automatskog podešavanja nule, pritisnite dugme *Adjust* (ili *Zero Adjust*). Na analognim multimetrima okrećite dugme *Zero Adjust* sve dok se kazaljka ne postavi na nulu. Držite sastavljene sonde nekoliko sekundi dok se multimetar automatski ne postavi na nulu.

Redovno proveravajte jesu li sonde čiste. Prljave ili zarđale sonde mogu biti uzrok pogrešnih rezultata merenja. Očistite ih sredstvom za čišćenje elektronskih kontakata. Ako je potrebno, očistite i konektore na samom multimetru.

Takođe, proveravajte napon baterija i zamenite ih kad treba.

## Biranje opsega

Na mnogim multimetrima moramo izabrati opseg merenja da bi imali precizne rezultate. Na primer, ako merimo napon baterije od 9 volti, opseg podešavamo na naredni veći od 9 volti, što je obično 20 ili 50 volti. Obavezno očitajte rezultat sa odgovarajuće skale. Ako ste izabrali, na primer, opseg od 20 volti, morate koristiti skalu od 20 volti. U suprotnom, dobićete netačne rezultate.

Ručno podešavanje opsega nije mnogo složeno. Međutim, danas je automatsko biranje opsega kod digitalnih multimetara uobičajeno. Kada želite da merite napon, birač postavljate u odgovarajući položaj i merite.

Bez obzira da li je multimetar analogan ili digitalan, on ukazuje na prekoračenje granice ako je veličina koja se meri prevelika da bi je aparat prikazao. Na digitalnom multimetru se prekoračenje prikazuje kao trepćuća jedinica (ili slovima OL). Na analognim multimetrima, prekoračenje se prikazuje tako što kazaljka izlazi van skale. Ukazivanje na prekoračenje je često kada se ispituje kontinuitet. To znači da je otpor prevelik da bi ga multimetar registrovao.

Kada koristite analogni multimetar, izbegavajte prekoračenja jer se tako može narušiti preciznost kretanja kazaljke.

## Dodatne funkcije i oprema

Neki multimetri imaju dodatne korisne funkcije, poput:
* **Ispitivanje kondenzatora i merenje kapacitivnosti**. Pošto merni kablovi i sonde mogu da utiču na očitavanje vrednosti kapacitivnosti, multimetri koji mere kapacitivnost imaju zasebno ležište. Umetnite kondenzator u to ležište i zatim izmerite njegovu kapacitivnost.
* **Ispitivanje diode**. Na digitalnim multimetrima s tom funkcijom postoji poseban položaj birača koji služi za ispitivanje dioda. I pomoću većine analognih multimetara možete ispitati rad diode, koristeći skalu za male otpornosti.
* **Ispitivanje tranzistora**. Kada se koristi analogni multimetar, tranzistori se ispituju na isti način kao diode. Na digitalnim multimetrima, tranzistori se ispituju uz korišćenje odgovarajućeg, označenog ležišta za tranzistore.

### Kvalitetni merni kablovi

Merni kablovi koji se dobijaju s jeftinijim multimetrima nisu toliko kvalitetni, pa bi možda trebalo nabaviti bolje. Dobar izbor su spiralni kablovi koji mogu da se rastegnu i do metar dužine.

Standardni kablovi sa šiljatim metalnim pipalicama prikladni su za većinu rutinskih ispitivanja, ali ćete ponekad morati da upotrebite kablove koje imaju štipaljke. Te štipaljke služe za pričvršćivanje sondi kako bi ruke bile slobodne.

Ako ih uz multimetar niste dobili, možete kupiti štipaljke koje se naknadno postavljaju na standardne sonde.

## Saveti za bezbednost 

Ako ispitujemo visok napon iz gradske mreže nepažljivo korišćenje multimetra može izazvati ozbiljne povrede. Čak i ako ne ispitujemo visoki napon, možemo biti izloženi opasnoj struji ako radimo sa uređajima kao što su radio-prijemnik, stereo uređaj ili video-rikorder. Svi oni imaju u sebi velike elektrolitske kondenzatore koji mogu sadržati desetine ili stotine volti i nakon što je uređaj isključen iz struje.

- **Držite prste podalje od sondi multimetra!** Ako pipnete provodnik kroz koji prolazi naizmenična struja možete se ozbiljno ozlediti pa čak i poginuti. 
- **Ne postavljajte sonde naslepo po kolu** da bi očitali neku vrednost, već samo na one delove kola koji su vam poznati. 
- **Držite jednu ruku u džepu**. Pričvrstite crnu sondu na uzemljenje, jednom rukom koristite crvenu sondu, a drugu bezbedno držite u džepu.

## Eksperiment: Merenje otpora vode

Multimetar možemo upotrebiti za prost naučni eksperiment kojim se demonstrira postupak merenja otpora, i pokazuje koliko primesa ima u vodi koju pijemo. To ćemo izvesti na sledeći način:

1. Uzmite dve čiste čaše.
2. Isperite ih destilovanom vodom. Destilovanu vodu možete kupiti u svakoj samoposluzi.
3. Jednu čašu napunite destilovanom vodom, a drugu običnom.
4. Podesite multimetar za merenje otpora. Podesite ga na prilično velik opseg, recimo 200 kilooma ili više.
5. Gumicom za tegle spojite izolovane ručice sondi. Uverite se da se metalni delovi sondi ne dodiruju.
6. Uronite sonde u čašu s destilovanom vodom. Zabeležite rezultat i - po potrebi - smanjite opseg merenja.
7. Nakon toga uronite sonde u čašu sa običnom vodom. Zabeležite dobijeni rezultat.

U osnovnoj školi smo učili da voda provodi elektricitet. Ta tvrdnja nije sasvim tačna. Voda bez primesa je izolator; elektricitet provode minerali rastvoreni u vodi. Destilovana voda sadrži malo minerala, pa ima vrlo veliku otpor. U zavisnosti od toga gde živite, voda iz vodovodne mreže može da sadrži mnogo soli i minerala, pa je zato njena provodnost veća.
