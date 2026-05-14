This is a automaticly closing door closer 

you push the button and the door closes. I was tiered of my door being constantly left open by every one, so i built this , all you have to do is press a button and vola, the motor spins and it closes. i have used a hight power motor to make sure the door closes ,and a special type of adhesive that bonds to the wood, it is designed to be rechargeible. 

Before ataching the wires to the esp32 vin, make sure , using a multi meter that that the wire coming from the buck converter has a voltage of 5v.


**onshape link** =https://cad.onshape.com/documents/bdd11de85f4570d51cb36bd7/w/b7536c01ad29c059d531be40/e/07df8b484f8b3f7ee84a2b9b?renderMode=0&uiState=69f773907c9e9754978c7c0b


<img width="456" height="650" alt="image" src="https://github.com/user-attachments/assets/4f2492cb-006c-43d6-8838-15de3b196b8f" />




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
| esp32 | gpio 12 | l298n IN1|
| esp 32 |gpio 13 | L298n IN2 |
<img width="3508" height="2480" alt="image" src="https://github.com/user-attachments/assets/dffa8311-d884-44aa-8000-76867a76e0b3" />

        SENDER REMOTE
| PART | PIN | CONNECTS TO |
|-------------|-----------------|------------|
| BUTTON | LEG 1 | ESP32 GPIO 15|
|BUTTON | LEG 2 | ESP32 GND |
|battery|positive|TP4056 B+|
|battery|negative|Tp4056 B-|
|tp4056|out+|boost module vin+|
|tp4056|out-|boost module vin-|
|step up module|vout+|esp32 5v|
|step up module|vout-|esp32 GND|

OVERVIEW OF ELECTRONICS
<img width="872" height="447" alt="image" src="https://github.com/user-attachments/assets/41cbf350-64f1-4c59-881d-368c3aa04bd5" />


**ASSEMBLING INSTRUCTIONS **

