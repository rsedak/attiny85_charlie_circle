[Engleska verzija](README.md).

Uvod
============
Svrha edukacijskog modula "Čarliev krug" je edukacija učenika. Pokazuje prednosti spajanja LE dioda u spoj charlieplexing (multipleksiranje sa tri stanja)
![Shield application](images/charlie_circle.jpg)


Autor
------------
- Robert Sedak — svojstva, programiranje, dizajn el. scheme, CAD dizajn.


Application
-----------
Robert Sedak je snimio video s primjerom programiranim u Arduino IDE s podrškom za ATtiny85:
[![Shield application](images/default.png)](https://youtu.be/oApuzNo8WgQ "Edukacijski modul Čarliev krug - primjer programiranja")




Primjere za Arduino IDE možete preuzati [ovdje](examples/).


Popis komponenti
-----------------
- 1 kom, PCB
- 4 kom, 470 ohm 1/4W 1% otpornik (R1, R2, R3, R4)
- 12 kom, LED 3mm (D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12)
- 1 kom, 6x6x4.3mm SPST tipkalo (SW1)
- 1 kom, SDPT 1P2T pomični prekidač (SW2)
- 1 kom, 100nF 50V keramički kondenzator
- 1 kom, 8-Pin DIL IC podnožje
- 1 kom, ATtiny85
- 1 kom, 14x7.5mm pasivna elektronička piezoe zujalica
- 1 kom, kučište za bateriju Keystone 1060
- 1 kom, baterija 2025



Datoteke s dizajnom
------------
Ovaj semafor je dizajniran pomoću programa [KiCad](http://kicad.org/). Datoteke se nalaze u mapi [design_files](design_files/). Elekroničku schemu možete pogledati [ovdje](images/charlie_circle_schematic.png).


Gerber datoteke
------------
Gerber datoteke možete preuzeti [ovdje](gerber/attiny85_charlie_circle.zip).


Firmware
--------
Ovo učilo može biti progrmairano pomoću [Arduino IDE](https://www.arduino.cc/).
[ATTinyCore by Spence Konde](https://github.com/SpenceKonde/ATTinyCore) je korišten za programiranje ATtiny85 u Arduino IDE.
Primjer za Arduino IDE se nalazi u mapi [examples](examples/).


Licenca
-------
[Imenovanje-Dijeli pod istim uvjetima 4.0 međunarodna (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/deed.hr)

Slobodno možete:
- Dijelite dalje — možete umnažati i redistribuirati materijal u bilo kojem mediju ili formatu
-  Stvarajte prerade — možete remiksirati, mijenjati i prerađivati djelo u bilo koju svrhu, pa i komercijalnu

Davatelj licence ne može opozvati slobode korištenja koje Vam je ponudio dokle god se pridržavate uvjeta licence.

Pod sljedećim uvjetima:
- Imenovanje — Morate adekvatno navesti autora, uvrstiti link na licencu i naznačiti eventualne izmjene. Možete to učiniti na bilo koji razuman način, ali ne smijete sugerirati da davatelj licence izravno podupire Vas ili Vaše korištenje djela.
- Dijeli pod istim uvjetima — Ako remiksirate, mijenjate ili prerađujete materijal, Vaše prerade morate distribuirati pod istom licencom pod kojom je bio izvornik.

Bez daljnjih ograničenja — Ne smijete dodavati pravne uvjete ili tehnološke mjere zaštite koji će druge pravno ograničiti da čine ono što im licenca dopušta.

Odricanje od odgovornosti
-------------------------
NAPOMENA - Dizajn je objavljen u dobroj namjeri i "takav kakav je" ("AS IS"), te sa mogućim greškama. Autor je kreirao učilo, slike, video i programski kod. Autoru je radilo i uspjelo raditi na način kako je opisano, što ne znaći da će raditi i Vama. Ne odgovaram ni za kakve posljedice koje mogu nastati prilikom korištenja učila, uputa ili programskog koda. Odričem se sve odgovorosti i jamstva- sami ste odgovorni za ono što radite i sami ste odgovorni što ste pristali pratiti i koristiti naše upute i informacije.

Autor može mijenjati specifikacije i opise proizvoda u bilo kojem trenutku, bez prethodne obavijesti. Korisnik se ne smije osloniti na odsutnost ili karakteristike bilo kojih značajki ili uputa označenih kao "rezervirano" ili "nedefinirano".
Autor zadržava pravo budućih izmjena definicija i neće snositi nikakvu odgovornost za sukobe ili nekompatibilnosti koje proizlaze iz budućih promjena. Podaci o proizvodu na web stranici ili materijalima podložni su promjenama bez prethodne obavijesti. Nemojte finalizirati dizajn s ovim podacima.