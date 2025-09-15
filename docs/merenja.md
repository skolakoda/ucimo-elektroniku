# Merenja multimetrom

Multimetar se koristi za brojna merenja u elektronici. Svaki multimetar ima par mernih kablova (**crni** za uzemljenje, **crveni** za pozitivni pol), sa metalnom sondom ili pipalicom na kraju. Pomoću multimetra se mere:

* **napon** (jednosmerni i naizmenični)
* **struja**
* **otpor**
* **kontinuitet** (je li kolo čitavo ili prekinuto)

Na nekim multimetrima moramo izabrati opseg merenja da bi imali precizne rezultate. Na primer, ako merimo napon baterije od 9 volti, opseg podešavamo na naredni veći napon, što je obično 20 ili 50 volti. Obavezno očitajte rezultat sa odgovarajuće skale. Ako ste izabrali, na primer, opseg od 20 volti, morate koristiti skalu od 20 volti. U suprotnom, dobićete netačne rezultate.

Danas je automatsko biranje opsega kod digitalnih multimetara uobičajeno. 

## Merenje napona

Multimetar na DC V.

- **Merenje napona kola.** Multimetar kačimo za napajanje - crnu sondu na negativni, crvenu na pozitivni pol - i očitavamo vrednost.
- **Merenje napona komponente.** Multimetar kačimo za nožice komponente i proveravamo napaja li se ona odgovarajućim naponom. Napon komponente ili **pad napona** je razlika električnog potencijala između njena dva priključka. 
- **Merenje napona baterije**. Multimetar kačimo za bateriju - crna sonda na minus, crvena na plus. Precizniji su rezultati kada se baterija meri pod opterećenjem (sa prikačenim potrošačem).

## Merenje struje

Multimetar na A (DC ili AC).

- **Merenje struje kroz kolo.** Da bismo izmerili ukupnu struju koju kolo crpi, potrebno je redno vezati multimetar u kolo, tako da struja prolazi kroz njega (crvena sonda ka plusu, crna ka minusu). Ako je redna veza, struja svake komponente je jednaka. 
- **Merenje struje kroz komponentu.** Ako je veza paralelna, svaka grana ima svoju struju. Multimetar povezujemo samo u jednu granu i merimo samo struju koja teče kroz tu komponentu.

Ako je prejaka struja, komponente mogu pregoreti.

> Oprez, mnogi multimetri mere struju samo do određene jačine!

## Merenje otpora

Multimetar na Ω. Isključimo napajanje. Sonde multimetra postavimo na krajeve komponente (žice, otpornika, motora i slično) i očitamo vrednost otpora.

Možemo meriti otpor celog kola ili neke komponente. **Izostanak otpora** ukazuje na kratak spoj (veza između dve tačke različitog potencijala sa vrlo malim ili nikakvim otporom), a **beskonačan otpor** na otvoreno (prekinuto) kolo.

Neke komponente koje proveravamo otporom:
* **Osigurač**: Pregoreli osigurač daje otvoreno kolo.
* **Prekidač**: Uključen prekidač ima otpor nula (kratak spoj), a isključen beskonačno (otvoreno kolo).
* **Lemni spoj**: Neispravan lemni spoj ima beskonačan otpor (otvoreno kolo). Isto važi za spoj na štampanoj ploči.

> Čak i žica pruža otpor. Kada ispitujemo dugačku žicu, multimetar ne pokazuje nula oma. Sva električna kola suprotstavljaju se toku elektrona. Čak i kratka žica pruža otpor, ali je obično zanemarljiv (manji od oma). Što je žica duža, otpor je veći, posebno ako je prečnik mali. S druge strane, što je žica deblja, otpor je manji.

### Ispitivanje prekidača

Prekidače ćemo najlakše ispitati kada nisu u kolu:
* Kada je prekidač isključen, multimetar bi trebalo da pokaže beskonačnu otpornost.
* Kada je prekidač uključen, multimetar bi trebalo da pokaže nula oma. 

Preklopnik često nema položaj isključeno, već samo dva položaja uključeno. Njega možemo ispitati kao da je reč o dva prekidača.

### Ispitivanje osigurača

Osigurač štiti elektronsko kolo, tako što pregori kada struja kroz njega premaši dozvoljenu jačinu. Osigurač može da pregori i iz drugih razloga, kao što je naponski udar usled udara groma.

Da proverite osigurač, birač multimetra postavite u režim za merenje otpora. Krajeve osigurača dodirnite sondama. Očitana vrednost bi trebalo da bude 0 (nula) oma. Ukoliko multimetar pokaže beskonačnu otpornost, osigurač je pregoreo i morate ga zameniti.

### Ispitivanje otpornika

Otpornici ograničavaju tok struje ili dele napon u kolu. Oni imaju vrlo različite otpornosti. 

Otpornike možete ispitati multimetrom na sledeći način:
1. Podesite multimetar za merenje otpornosti. Počnite s visokim opsegom pa ga postepeno smanjujte.
2. Postavite sonde na krajeve otpornika. Ne dodirujte izvode prstima, jer ćete usled otpornosti tela dobiti netačan rezultat.
3. Izmerite otpornost i zabeležite očitavanje.

Neispravan otpornik može da daje znake otvorenog kola (multimetar prikazuje beskonačnu otpornost) ili kratkog spoja (multimetar pokazuje nula oma).

Kada ispitate otpornik, proverite i da li se otpornost koju prikazuje multimetar slaže s vrednošću na samom otporniku. Očitavanje mora da bude u granicama tolerancije otpornika. Na primer, ako otpornik ima toleranciju od 10 procenata a nominalna otpornost je 1K oma, prihvatljivi rezultati merenja moraju da budu u opsegu od 900 do 1100 oma.

### Ispitivanje potenciometara

![](slike/merenje-potenciometra.jpg)

Potenciometar je promenljivi otpornik. Sonde multimetra se povezuju za izvode. Kada su sonde postavljene u tačke 1 i 2, okretanjem birača u jednom smeru otpornost se povećava. Kada su sonde postavljene u tačke 2 i 3, okretanjem birača u drugom smeru otpornost se smanjuje.

Dok okrećete osovinu potenciometra, pratite šta multimetar pokazuje i uočite svaku naglu pramenu otpornosti, jer ona ukazuje na oštećenje u unutrašnjosti potenciometra. U tom slučaju, zamenite potenciometar.

### Eksperiment: Merenje otpora vode

Multimetar možemo upotrebiti za prost naučni eksperiment kojim se demonstrira postupak merenja otpora, i pokazuje koliko primesa ima u vodi koju pijemo. To ćemo izvesti na sledeći način:

1. Uzmite dve čiste čaše.
2. Isperite ih destilovanom vodom. Destilovanu vodu možete kupiti u svakoj samoposluzi.
3. Jednu čašu napunite destilovanom vodom, a drugu običnom.
4. Podesite multimetar za merenje otpora. Podesite ga na prilično velik opseg, recimo 200 kilooma ili više.
5. Gumicom za tegle spojite izolovane ručice sondi. Uverite se da se metalni delovi sondi ne dodiruju.
6. Uronite sonde u čašu s destilovanom vodom. Zabeležite rezultat i - po potrebi - smanjite opseg merenja.
7. Nakon toga uronite sonde u čašu sa običnom vodom. Zabeležite dobijeni rezultat.

U osnovnoj školi smo učili da voda provodi elektricitet. Ta tvrdnja nije sasvim tačna. Voda bez primesa je izolator; elektricitet provode minerali rastvoreni u vodi. Destilovana voda sadrži malo minerala, pa ima vrlo veliku otpor. U zavisnosti od toga gde živite, voda iz vodovodne mreže može da sadrži mnogo soli i minerala, pa je zato njena provodnost veća.

## Ispitivanje kontinuiteta

Stavimo multimetar na režim za kontinuitet (*Continuity* ili *Tone*), koji obično uključuje zvučni signal.

Ispitivanje kontinuiteta koristimo za pronalaženje prekinutih provodnika. Povežite sonde s krajevima žice:
* Otpor 0 oma (kratak spoj) znači da postoji veza.
* Beskonačan otpor (otvoreno kolo) znači da postoji prekid.

Takođe, možemo ispitivati kratak spoj između dve žice, koje ne bi trebalo da su povezane. Povežite sonde s ogoljenim krajem dveju žica. Trebalo bi da očita beskonačan otpor. Ako očita 0 postoji kratak spoj.
