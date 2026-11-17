# Tehnike navodnjavanja

## Sifonsko pretakanje (pretakanje crevom preko ivice bazena)

Ako je površina vode u bazenu viša od mesta zalivanja, voda može da teče preko ivice kroz napunjeno crevo, bez pumpe.

1. Potopi celo crevo u bazen i napuni ga vodom tako da iz njega izađe sav vazduh.
2. Dok je crevo pod vodom, začepi jedan kraj.
3. Začepljeni kraj prebaci preko ivice i spusti niže od površine vode u bazenu. Drugi kraj sve vreme ostaje potopljen.
4. Otčepi donji kraj: voda kreće nizbrdo i povlači vodu iz bazena preko ivice. To je sifonski tok.

Tok traje dok je izlaz niži od površine vode i dok vazduh ne uđe u crevo. Donji kraj ne mora biti niži od dna bazena.

Za prekid zatvori ventil na izlazu ili izvadi potopljeni kraj iz vode. Ako zatvoriš ventil i crevo ostane puno vode, sledeći put tok kreće njegovim otvaranjem; ako uđe vazduh, crevo treba ponovo napuniti.

### Automatsko otvaranje i zatvaranje

Ventil postaviti nizbrdo, **ispod najnižeg očekivanog nivoa vode u bazenu i pre grananja ka voćkama**. Zatvoren ventil zadržava vodu u sifonskom vodu, pa pri sledećem otvaranju tok može ponovo da krene bez ručnog punjenja.

Raspored delova:

**Potopljen usis sa mrežicom → nepropusno crevo preko ivice → motorni kuglasti ventil → filter → razvod do voćaka.**

- **Usis:** pričvrstiti ispod najnižeg dozvoljenog nivoa vode, iznad mulja i dovoljno duboko da ne uvlači vazduh kroz vrtlog.
- **Crevo:** koristiti ojačano usisno crevo ili cev deklarisanu za očekivani potpritisak, kao i za pritisak u donjem delu voda. Obično baštensko crevo može da se spljošti. Sve spojeve napraviti nepropusnim i njihov broj svesti na minimum.
- **Ventil:** koristiti motorni kuglasti ventil odgovarajućeg pritiska, sa sporijim zatvaranjem koje ublažava udar vode. Za zatvaranje pri nestanku napajanja potreban je pogon sa povratnom oprugom ili rezervom energije; običan motorni ventil može ostati otvoren.
- **Upravljanje:** Arduino ili gotov kontroler, solarni panel, regulator punjenja i baterija. Kontroler preko odgovarajućeg upravljačkog modula otvara ventil po rasporedu i zatvara ga po isteku vremena; po želji dodati senzor vlažnosti ili daljinsko upravljanje.
- **Senzor nivoa:** zatvara ventil i zabranjuje novo zalivanje pre nego što usis ostane bez dovoljno vode.
- **Senzor protoka:** proverava da li je posle otvaranja voda krenula. Ako protoka nema, kontroler zatvara ventil i prijavljuje problem, umesto da pokušava neograničeno.

#### Redosled rada

1. Prvi put potpuno napuniti sifonski vod vodom, izbaciti vazduh i zatvoriti ventil. Za dugačak ili nepomičan vod koristiti priključak za punjenje ili vakuumsko punjenje na najvišoj tački, koji se zatim nepropusno zatvara.
2. U zadato vreme kontroler proverava nivo vode i stanje napajanja.
3. Ako su uslovi dobri, otvara ventil i proverava protok.
4. Posle zadatog vremena, pri niskom nivou vode ili drugom kvaru zatvara ventil. Deo voda od bazena do ventila ostaje pun, dok razvod iza ventila sme da se isprazni.

#### Kako sačuvati sifon

Usis mora ostati potopljen, ventil mora dobro zatvarati, a svi delovi sifonskog voda moraju zaptivati i pod potpritiskom. Spoj koji ne kaplje nije nužno nepropustan za ulazak vazduha.

Na delu voda iznad površine bazena **ne postavljati običan automatski vazdušni ventil koji pri potpritisku uvlači vazduh**, jer bi prekinuo sifon. Priključci za punjenje moraju ostati zatvoreni tokom rada.

Crevo provesti što niže preko ivice i bez dodatnih vrhova na kojima bi se skupljao vazduh. Podizanje vode oko 5 m može biti izvodljivo, ali povećava potpritisak i otežava pouzdan rad u odnosu na prelazak neposredno preko ivice.

#### Automatsko obnavljanje sifona

Vazduh može vremenom da se nakupi i iz gasova rastvorenih u vodi, pa trajno zadržavanje sifona nije zagarantovano ni uz dobre spojeve. Za samostalan rad bez ručnog ponovnog punjenja predvideti namenski sklop za vakuumsko punjenje na najvišoj tački.

Takav sklop koristi vakuumsku pumpu, posudu za odvajanje vode i zaštitu pumpe od usisavanja vode, senzor napunjenosti i zaporni ventil koji ne propušta vazduh. Kontroler pri gubitku sifona zatvara izlazni ventil, izvlači vazduh do napunjenosti voda, izoluje vakuumski priključak i ponovo pokušava zalivanje; neuspešan pokušaj vremenski ograničava.

#### Pritisak kod voćaka

Automatika čuva napunjen vod, ali ne stvara dodatni pritisak. Pritisak pri zalivanju zavisi od razlike između površine vode u bazenu i mesta zalivanja, umanjene za gubitke kroz crevo, filter i ostale delove. Kako nivo bazena opada, opada i raspoloživi pritisak; kapljače i ventile treba uskladiti sa tim opsegom.

Ako treba ujednačeniji pritisak, regulator može smanjivati višak samo dok ima dovoljno ulaznog pritiska. Ako je pritisak preslab, potrebna je pumpa.

### Napomene

Za bazen na oko 300–500 m nadmorske visine teorijska granica visine sifona je približno **9,5–9,8 m iznad površine vode**, pri temperaturi vode od oko 20 °C i standardnom atmosferskom pritisku za tu nadmorsku visinu. Stvarna granica je niža zbog protoka i gubitaka u crevu.

Ova visina meri se od površine vode u bazenu do najviše tačke creva, a ne od dna bazena ili mesta zalivanja. Za crevo koje prelazi nekoliko desetina centimetara preko ivice bazena navedena nadmorska visina nema bitan uticaj.

### Izvor

[FAO — Water lifting devices, odeljak o sifonima](https://www.fao.org/4/ah810e/AH810E07.htm): uslovi sifonskog toka, nepropusnost voda i vakuumsko punjenje.
