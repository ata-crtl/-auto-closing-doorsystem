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


