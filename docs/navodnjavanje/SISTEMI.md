# Sistemi za navodnjavanje

Osmisliti različite automatizovane sisteme za navodnjavanje, koji najbolje pristaju različitim uslovima. 

## Scenario 1: bez struje, rezervoar za kišnicu

Voćnjak bez struje i gradske vode, ima rezervoar za kišnicu od 1000L. rezervoar nije na visini i nema previše jak pritiska. voda normalno teče iz česme. na česmu se može prikačiti crevo.

### Zalivanje slobodnim padom

Voda iz rezervoara gravitaciono ide kroz crevo do voćaka.

Na izlaz rezervoara postaviti baterijski tajmer sa ventilom ili Arduino koji otvara motorni kuglasti ventil. 

Ventil treba da radi bez minimalnog pritiska.

Bonus: Rezervoar postaviti na platformu, pa koristiti gravitaciju radi većeg pritiska.

### Zalivanje pumpom

Solarni panel i baterija napajaju pumpu koja potiskuje vodu iz rezervoara u sistem kap po kap. Arduino ili gotov tajmer uključuje pumpu po rasporedu ili prema vlažnosti tla.

### Solarni komplet

Postaviti gotov komplet sa solarnim panelom, pumpom i programatorom za zalivanje iz rezervoara, bez Arduina. Mali kompleti namenjeni saksijama odgovaraju samo malom delu voćnjaka.

## Scenario 2: struja, bunar i bazen 

Voćnjak sa dostupnom strujom, bez gradske vode. Ima bunar koji radi na pumpu sa crevom. Takođe ima kolektorski bazen koji se ne koristi, za koji je verovatno potrebna pumpa za izvlačenje vode.

### Bunarska pumpa

Postojeću bunarsku pumpu povezati na sistem kap po kap i uključivati programatorom preko sklopke za motor (Arduino ili kupovni kontroler).

Takođe se može uključivati preko pametne utičnice (ili tajmera za utičnicu). 

### Kolektorski bazen

U bazen postaviti odgovarajuću potopnu pumpu ili pored njega površinsku pumpu, uz filter, pa vodu slati do voćaka. Kontroler uključuje pumpu po rasporedu, a plovak je isključuje kada nema dovoljno vode.

## Scenario 3: bez struja, voda u burićima

Voćnjak bez struje. Vode ima u metalnim burićima (od 100 ili 200L) raspoređenim duž voćnjaka.

### Male solarne pumpe za buriće

Svako bure dobija malu pumpu sa solarnim panelom, baterijom i tajmerom. Pumpa zaliva okolne voćke, a senzor nivoa je zaustavlja kada se bure isprazni.

Za obližnje voćke moguće koristiti i gravitacione kapljače ili keramičke dozatore povezane sa buretom.

## Scenario 4: bez struje i vode

Voćnjak bez struje i vode. I bez hladovine. Voćke su spržene, zakržljale i redovno se suše.

### Sakupljanje kišnice

Napraviti neku površinu za sakupljanje kiše u rezervoar ili bazen, pa zalivati gravitaciono ili solarnom pumpom.
