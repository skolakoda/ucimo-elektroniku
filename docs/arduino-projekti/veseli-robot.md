# Veseli robot

Veseli robot je promena softvera za robot auto, tako da: 
- pleše uz muziku (sinhronizuje pokrete s ritmom) 
- prati vlasnika kao ljubimac, reaguje na neke komande

## Komponente

Pored standardnih komponenti, koristi još:
- mikrofonski modul (za detekciju ritma)
- termalni senzor (npr. MLX90640, AMG8833) za detekciju toplih tela; detektuje i peć
- ili PIR (detektuje samo pokret toplih tela, ne u mirovanju)

Ultrazvučni senzor možda nije neophodan.

## Algoritam

Algoritam praćenja:
- robot kulira, povremeno se osvrne da potraži živo biće.
- kad vidi nekog priđe mu i kulira.

Algoritam plesa:
- kad čuje ritam reaguje plesnim korakom (đuska kapueru): 
    1. levi točak nazad 
    2. levi točak napred 
    3. desni točak nazad 
    4. desni točak napred
- povremeno nakon glavne sekvence radi okret
- možda i vrtenje glavom
