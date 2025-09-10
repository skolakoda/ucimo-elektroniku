# MOSFET

[wiki](https://sh.wikipedia.org/wiki/MOSFET)

MOSFET tranzistor ima tri izvoda: 
1. *gate* (kapija)
2. *drain* (odvod) 
3. *source* (izvor)

## Primer: MOSFET kao prekidač

![](slike/arduino-mosfet.jpg)

Na osnovu signala iz Arduina, MOSFET (IRFZ44N, n kanalni) uključuje/isključuje drugo kolo, koje se sastoji od baterije i potrošača.

- Kapija (*gate*) se povezuje na izlazi pin Arduina. Ako ima napona, tranzistor pušta struju, ako nema ne pušta.
- Odvod (*drain*) se povezuje na minus potrošača.
- Izvor (*source*) se povezuje na minus baterije i uzemljenje arduina.
- Plus baterije se povezuje na plus potrošača.

Preporučljivo je povezati otpornik od 10k na kapiju MOSFET-a, da se ukloni šum signala.

Ako se koristi analogni izlaz Arduina, MOSFET može služiti kao potenciometar.

Glavni problem MOSFET-a je što ih lako može oštetiti statički elektricitet.
