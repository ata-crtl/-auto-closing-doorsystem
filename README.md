This is a automaticly closing door closer. you push the button and the door closes. I was tiered of my door being constantly left open by evry one, so i built this , all you have to do is press a button and vola, the motor spins and it closes.



CONNECTIONS 

| part | pin| connects to  |
| ------------- | ------------- | ------------ |
| usb c charging module  | vo+ | battery red + |
| usb c charging module  | vo -  | battery black - |
| battery | red + | buck converter IN+ |
| battery | black - | buck converter IN- |
| battery | black - | L298N gnd terminal  |
| battery | black - | usb c module VO -|
| buck conveter |out + | esp 32 vin or 5v |
| buck converter| OUT - | esp 32 GND |
| battery | red +  | l298n 12v |
| battery | black - | l298n Gnd terminal |
| motor | wire 1  | l298n OUT1 |
| motor | wire 2  | l298n OUT 2 |
| esp32 | gpio 12 | l298n IN1|
| esp 32 |gpio 13 | L298n IN2 |

        SENDER REMOTE
| PART | PIN | CONNECTS TO |
|-------------|-----------------|------------|
| BUTTON | LEG 1 | ESP32 GPIO 15|
|BUTTON | LEG 2 | ESP32 GND |


