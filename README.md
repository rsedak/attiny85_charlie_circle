[Croatian version](README_HR-HR.md).

Introduction
============

Purpose of Charlie circle module is student education. It shows advantages of charlieplexing.
![Shield front](images/charlie_circle.jpg "Charlie circle educational module")


Contributor
------------
- Robert Sedak — features, programming, schematic design, CAD design.


Application
-----------
Robert Sedak made a video with example programmed in Arduino IDE with ATtiny85 support:

[![Shield application](images/default.png)](https://youtu.be/oApuzNo8WgQ "Charlie circle educational module example")





You can download example for Arduino IDE from [here](examples/).


Bill Of Materials
-----------------
- 1 ea., PCB
- 4 ea., 470R ohm 1/4W 1% Resistor (R1, R2, R3, R4)
- 12 ea., LED 3mm (D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12)
- 4 ea., 6x6x4.3mm SPST Momentary push switch (SW1)
- 1 ea., SDPT 1P2T slide switch (SW2)
- 1 ea., 100nF 50V Monolithic Ceramic Capacitor
- 1 ea., 8-Pin DIL IC Socket
- 1 ea., ATtiny85
- 1 ea., 14x7.5mm passive electronic piezoelectric buzzer SE
- 1 ea., battery holder Keystone 1060
- 1 ea., battery 2025


Design Files
------------
This project is designed using Open Source [KiCad](http://kicad.org/). Design files are located in the [design_files](design_files/) folder.  You can see the [schematic](images/charlie_circle_schematic.png).


Gerber files
------------
You can download gerber files from [here](gerber/attiny85_charlie_circle.zip).



Firmware
--------
This project can be programmed using the Open Source [Arduino](https://www.arduino.cc/).
[ATTinyCore by Spence Konde](https://github.com/SpenceKonde/ATTinyCore) was used to program ATtiny85 in Arduino IDE.
Arduino example is located in [examples](examples/) folder.


License
-------
[Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/)

You are free to:
- Share — copy and redistribute the material in any medium or format
- Adapt — remix, transform, and build upon the material

This license is acceptable for Free Cultural Works.
- The licensor cannot revoke these freedoms as long as you follow the license terms.

Under the following terms:
- Attribution — You must give appropriate credit, provide a link to the license, and indicate if changes were made. You may do so in any reasonable manner, but not in any way that suggests the licensor endorses you or your use.
- ShareAlike — If you remix, transform, or build upon the material, you must distribute your contributions under the same license as the original.

No additional restrictions — You may not apply legal terms or technological measures that legally restrict others from doing anything the license permits.

Reference Designs ARE PROVIDED "AS IS" AND "WITH ALL FAULTS". Authors DISCLAIMS ALL OTHER WARRANTIES, EXPRESS OR IMPLIED, REGARDING PRODUCTS, INCLUDING BUT NOT LIMITED TO, ANY IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE.
Authors may make changes to specifications and product descriptions at any time, without notice. The Customer must notrely on the absence or characteristics of any features or instructions marked "reserved" or "undefined."
Authors reservesthese for future definition and shall have no responsibility whatsoever for conflicts or incompatibilities arising from future changes to them. The product information on the Web Site or Materials is subject to change without notice. Do not finalize a design with this info.


