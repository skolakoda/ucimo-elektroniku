Tvoj zadatak je da osmisliš različite automatizovane sisteme za navodnjavanje, koji najbolje pristaju različitim uslovima. Koristićemo Arduino kao kontroler ili neki drugi koji predložiš.

Imamo dovoljno velik budžet za opremu za navodnjavanje. Preferiram kupovinu sa Temu ili prodavnica u Srbiji. Solarni uređaji, motori na benzin, creva, nastavci, šta god je potrebno.

## Scenario 1

Voćnjak bez struje i gradske vode, ima rezervoar za kišnicu od 1000L. rezervoar nije na visini i nema previše jak pritiska. voda normalno teče iz česme. na česmu se može prikačiti crevo.

### Rešenje 1

Arduino sa solarnim panelom i baterijom otvara motorni kuglasti ventil, pa voda iz rezervoara gravitaciono ide crevom do voćaka. Ventil treba da radi bez minimalnog pritiska, a senzor nivoa da spreči zalivanje kada se rezervoar isprazni.

### Rešenje 2 — Solarna pumpa

Solarni panel i baterija napajaju pumpu koja potiskuje vodu iz rezervoara u sistem kap po kap. Arduino ili gotov tajmer uključuje pumpu po rasporedu ili prema vlažnosti tla.

### Rešenje 3 — Gotov solarni komplet

Postaviti gotov komplet sa solarnim panelom, pumpom i programatorom za zalivanje iz rezervoara, bez Arduina. Mali kompleti namenjeni saksijama odgovaraju samo malom delu voćnjaka.

### Rešenje 4 — Baterijski tajmer bez pumpe

Na izlaz rezervoara postaviti baterijski tajmer sa ventilom koji radi bez minimalnog pritiska. Voda gravitaciono ide kroz kratke vodove ili kapljače namenjene malom pritisku, ako visinska razlika omogućava protok.

### Rešenje 5 — Podignut rezervoar

Rezervoar postaviti na odgovarajuću nosivu podlogu iznad mesta zalivanja, pa koristiti gravitaciju i baterijski ili solarni ventil sa tajmerom. Ovo je alternativa pumpi kada teren i postavljanje rezervoara to dozvoljavaju.

## Scenario 2 

Voćnjak sa dostupnom strujom, bez gradske vode. Ima bunar koji radi na pumpu sa crevom. Takođe ima kolektorski bazen koji se ne koristi, za koji je verovatno potrebna pumpa za izvlačenje vode.

### Rešenje 1 — Postojeća bunarska pumpa

Postojeću pumpu povezati na sistem kap po kap i uključivati programatorom preko odgovarajuće sklopke za motor. Arduino ili gotov kontroler određuje vreme zalivanja.

### Rešenje 2 — Pumpa sa daljinskim upravljanjem

Pumpu uključivati radio-daljinskim upravljačem ili mobilnom aplikacijom preko Wi-Fi kontrolera ako postoji mreža, odnosno preko mobilne mreže ako je nema. Uključivanje ograničiti vremenski da pumpa ne ostane zaboravljena.

### Rešenje 3 — Korišćenje kolektorskog bazena

U bazen postaviti odgovarajuću potopnu pumpu ili pored njega površinsku pumpu, uz filter, pa vodu slati do voćaka. Kontroler uključuje pumpu po rasporedu, a plovak je isključuje kada nema dovoljno vode.

### Rešenje 4 — Međurezervoar

Bunarska pumpa prvo puni rezervoar, a druga pumpa iz njega zaliva voćnjak. Plovci kontrolišu punjenje, a zaseban kontroler zalivanje; podignut rezervoar može omogućiti zalivanje gravitacijom.

### Rešenje 5 — Zalivanje po zonama

Jedna pumpa snabdeva više grana, a kontroler redom otvara njihove ventile. Tako se voćnjak zaliva deo po deo kada pumpa ne može da snabdeva sve odjednom.

## Scenario 3

Voćnjak bez struje. Vode ima u metalnim burićima (od 100 ili 200L) raspoređenim duž voćnjaka.

### Rešenje 1 — Poseban ventil za svako bure

Na svako bure postaviti baterijski tajmer sa ventilom bez minimalnog pritiska i kratke vodove do obližnjih voćaka. Zalivanje radi gravitaciono ako je nivo vode dovoljno iznad izlaza kod voćaka.

### Rešenje 2 — Male solarne pumpe

Svako bure ili grupa burića dobija malu pumpu sa solarnim panelom, baterijom i tajmerom. Pumpa zaliva okolne voćke, a senzor nivoa je zaustavlja kada se bure isprazni.

### Rešenje 3 — Povezana burad i zajednička pumpa

Gde teren dozvoljava, burad povezati u zajedničku zalihu vode i koristiti jednu solarnu pumpu. Kontroler redom zaliva grupe voćaka preko ventila.

### Rešenje 4 — Prenosna pumpa

Koristiti jednu prenosnu akumulatorsku pumpu i crevo, pa je premeštati između burića. Tajmer ili daljinski upravljač olakšava zalivanje, ali premeštanje ostaje ručno.

### Rešenje 5 — Pasivno zalivanje

Za obližnje voćke koristiti gravitacione kapljače za nizak pritisak ili odgovarajuće keramičke dozatore povezane sa buretom. Nema elektronike, ali raspodela vode zavisi od terena i izabranih dozatora.

## Scenario 4

Voćnjak bez struje i vode. I bez hladovine. Voćke su spržene, zakržljale i redovno se suše.

Prvo treba obezbediti izvor vode; automatizacija može samo raspodeliti dostupnu zalihu.

### Rešenje 1 — Dovoženje vode u rezervoar

Postaviti rezervoar koji se povremeno puni dovezenom vodom. Solarna pumpa sa baterijom i tajmerom raspodeljuje vodu sistemom kap po kap.

### Rešenje 2 — Sakupljanje kišnice

Napraviti nadstrešnicu ili drugu površinu za sakupljanje kiše u rezervoar, pa zalivati gravitaciono ili solarnom pumpom. Tokom duže suše treba obezbediti dopunu iz drugog izvora.

### Rešenje 3 — Novi bunar

Ako uslovi i dozvole omogućavaju bunar, postaviti odgovarajuću bunarsku pumpu na solarno napajanje. Pumpa danju puni rezervoar, a kontroler iz njega raspoređuje zalivanje.

### Rešenje 4 — Dovod iz udaljenog izvora

Ako postoji dostupan izvor vode uz pravo korišćenja, dovesti vodu cevima, gravitaciono ili pumpom. Na parceli je skupljati u rezervoar i automatski raspodeljivati do voćaka.

### Rešenje 5 — Benzinska pumpa za punjenje

Ako u blizini postoji dostupan izvor vode, benzinskom pumpom povremeno puniti rezervoar. Zalivanje iz rezervoara zatim vodi solarni kontroler; pokretanje i dopuna goriva ostaju ručni.

Uz svako rešenje smanjiti gubitak vode malčem i zadržavanjem vode oko voćaka; mladim voćkama po potrebi obezbediti privremenu zasenu. To dopunjuje zalivanje, ali ne zamenjuje izvor vode.

## Zajedničke mogućnosti

- **Upravljanje:** raspored, senzor vlažnosti ili ručno uključivanje na daljinu; ovi načini mogu se kombinovati u navedenim rešenjima.
- **Veza:** radio-daljinski za lokalno upravljanje, Wi-Fi uz postojeću mrežu ili mobilna mreža za aplikaciju odnosno SMS gde postoji pokrivenost. LoRa može povezati udaljene kontrolere sa centralom, kojoj je za pristup telefonom potrebna internet veza.
- **Zaštita:** filter pre kapljača, zaustavljanje pri niskom nivou vode i ograničeno trajanje zalivanja. Kod pumpi sprečiti rad na suvo, a kod podignutih rezervoara nekontrolisano pražnjenje kroz ugašenu pumpu.

## Reference

- [Claber Aqua-Magic](https://www.claber.com/en/assistenza/manuali-istruzioni/guida/8063/Aqua-Magic%20System): primer gotovog solarnog sistema sa pumpom za male zasade.
- [GARDENA Water Control Master](https://www.gardena.com/uk/products/watering/water-controls/water-control-master/967927901.html): primer tajmera koji zahteva najmanje 0,5 bara, pa nije predviđen za rezervoar sa veoma slabim pritiskom.
