This is a automaticly closing door closer. you push the button and the door closes. I was tiered of my door being constantly left open by every one, so i built this , all you have to do is press a button and vola, the motor spins and it closes. i have used a hight power motor to make sure the door closes ,and a special type of adhesive that bond to the wood, it is designed to be rechargeible. Before ataching the wires to the esp32 vin, make sure , using a multi meter that that the wire coming from the buck converter has a voltage of 5v.


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

        SENDER REMOTE
| PART | PIN | CONNECTS TO |
|-------------|-----------------|------------|
| BUTTON | LEG 1 | ESP32 GPIO 15|
|BUTTON | LEG 2 | ESP32 GND |


**ASSEMBLING INSTRUCTIONS **
<img width="1102" height="651" alt="image" src="https://github.com/user-attachments/assets/9496cd25-e906-4eb4-a318-d313f1c34982" />

 STEP 1 : get part 3 and insert it between part 1 and 2 like shown above. after that on the end twards part 2, there should be part of part 3 sticking out, fix part 4 to the end of part 3 like shown above.
 <img width="865" height="441" alt="Screenshot 2026-05-03 131130" src="https://github.com/user-attachments/assets/6e26d812-d8d6-438b-ad11-385e41d9e586" />
 
 
 STEP 2 : insert into the larger frame like shown above.
 
 STEP 3 : inser the end of the motor into end of part 4.

 step 4 : put the motor connected to all the electronics into the case , put the adhesive at the bottom of the lid and place it on the top of the case with all the electronics.
<img width="992" height="487" alt="image" src="https://github.com/user-attachments/assets/df747555-c45e-4ee7-ad1c-2318853a84a4" />
 STEP 5 :The face shown in the pic above,should get attached using the polymer tape to the back of the door.
 <img width="312" height="367" alt="image" src="https://github.com/user-attachments/assets/f367fe6c-78b4-4104-a2a0-8554b6c36258" />
 STEP6: put the end of the fishing line,knot it once and slide it in the space to lock it in.
<img width="862" height="600" alt="image" src="https://github.com/user-attachments/assets/a64b3fea-5eac-414a-aa01-f76632bd8055" />
step7 : This piece goes above the door and the other end of the fishing line gets tied to it as well.

                            RECIVER REMOTE
1. put the button throught the lid the solder the elctronics
2. close the lid using the given screws.

