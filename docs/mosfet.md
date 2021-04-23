## MOSFET (IRFZ44N, n kanalni)

Nogice: 1. gate (kapija), 2. drain (odvod), 3. source (izvor)

Primer sa Arduinom, baterijom i potrošačem (LED diodom):

- Kapija mosfeta se povezuje na izlazi pin Arduina. Ako ima napona, pušta struju, ako nema ne pušta.
- Odvod mosfeta se povezuje na minus potrošača.
- Izvor mosfeta se povezuje na minus baterije i uzemljenje arduina.
- Plus baterije se povezuje na plus potrošača.

Preporučljivo je povezati otpornik od 10k na kapiju mosfeta, da se ukloni šum signala.

Ako se koristi analogni izlaz arduina, mosfet može služiti kao potenciometar.

![](slike/arduino-mosfet.jpg)
