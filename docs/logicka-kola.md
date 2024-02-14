# Logička kola

**Logička kola** su integrisana kola koja na osnovu ulaznih vrednosti i logičkih pravila određuju izlaznu vrednost. Obično imaju dva ulaza; invertor ima samo jedan ulaz, a postoje i logička kola s više ulaza. Kada se govori o vrednostima ulaza i izlaza, kaže se da je ulaz visok (1) ili nizak (0). U elektronici, visok ulaz znači da kolo ima napon oko 5 volti. Nizak ulaz znači da je napon približno 0 volti.

## Najčešća logička kola

U elektronici ćete koristiti neko od ovih pet najčešćih tipova logičkih kola: 
- I
- ILI 
- NE (invertor) 
- NI (u osnovi I kolo za kojim sledi invertor) 
- NILI (u osnovi ILI kolo za kojim sledi invertor)

U integrisanim kolima se najčešće nalazi više logičkih kola, kao što je integrisano kolo sa četiri dvoulazna I kola (četvorostruko dvoulazno I kolo).

## Logička kola pomoću prekidača

### Logičko I kolo

![](slike/i-kolo.jpg)

Logičko I kolo dobija se rednim povezivanjem dva prekidača. Struja će teći samo ako su oba prekidača zatvorena (oba uslova ispunjena).

### Logičko ILI kolo

![](slike/ili-kolo.jpg)

Logičko ILI kolo dobija se uporednim povezivanjem dva prekidača. Struja će teći ako je bilo koji prekidač zatvoren (bilo koji uslov ispunjen).

Ako umesto prekidača stavimo foto-otpornike ili druge senzore u kombinaciji sa tranzistorima kao prekidačima, možemo graditi kompleksniju logiku (npr. da signal krene ako ima svetla i pokreta).
