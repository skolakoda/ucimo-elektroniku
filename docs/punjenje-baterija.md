# Punjenje baterija

Za stabilizaciju solarnog napona prilikom punjenje baterija potrebno je koristiti regulator napona, takođe zvan i regulator punjenja (*charge controller*).

## Nikl-metal-hidridne (NiMH) ćelije od 1.2 V

Najjednostavniji način punjenja NiMH baterije je da ograničimo struju otpornikom. Da bi izračunali vrednost otpornika, moramo odlučiti kojom strujom punimo bateriju. NiMH baterija može se neograničeno puniti strujom manjom od 10% njenog kapaciteta. Npr, ako AA baterije imaju kapacitet 2000mAh, možemo ih puniti strujom od 200mA. Ako planiramo da punimo baterije neprestano, bolje puniti strujom od 5% kapaciteta baterije, što iznosi 100mA.

### Vreme punjenja

Tipično vreme punjenja NiMH baterija je: 

```
Vreme punjenja = 3 * kapacitet (C) / struja
```

Sa strujom od 100mA:

```
Vreme punjenja = 3 × 2000mAh / 100mA 
= 6000mAh / 100mA 
= 60 časova
```

### Biranje otpornika

Recimo da imamo:
- 12v punjač
- 4 x AA nikl-metal-hidridne (NiMH) baterije

Da bi izabrali otpornik, treba izračunati napon. Kada su baterije prazne imaju napon oko 1V, pa će napon kola biti:
```
V = 12V – 4V = 8V
```

Sada možemo izračunati otpor: 
```
R = V / I = 8V / 0.1A = 80Ω
```

Iz opreza možemo izabrati jači otpornik od 100Ω. Kada ga prikačimo u kolo, aktuelna struja će biti slabija:
```
I = V / R = 8V / 100Ω = 80mA
```

Sa jačim otpornikom, vreme punjenja je duže. Sa strujom od 80mA će biti:

```
Vreme punjenja = 3 × 2000mAh / 80mA 
= 6000mAh / 80mA 
= 75 časova
```

Na kraju, treba da izračunamo koje snage otpornik treba da bude:
```
P = I * V = 0.08A * 8V = 0.64W = 640 mW
```

Iz opreza, bolje koristiti jači otpornik (do 1 W).

### Slabljenje struje nakon punjenja

Kada se baterije skroz napune njihov napon dostiže do 1.3V (umesto početnih 1V), pa će struja u kolu oslabiti:

```
I = V / R 
= (12V – 1.3V × 4) / 100Ω 
= (12V - 5.2V) / 100Ω 
= 6.8V / 100Ω 
= 68mA
```

## Litijum jonske (Li-Ion) ćelije od 3.7 V

Ne treba ih puniti do kraja, to ih oštećuje. Delimično punjenje im najviše odgovara. Pune se otprilike do 4.2V.

Odmah obustaviti punjenje ako se baterija zagreva, to je znak opasnosti.
