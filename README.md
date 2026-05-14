This is a automaticly closing door closer 

you push the button and the door closes. I was tiered of my door being constantly left open by every one, so i built this , all you have to do is press a button and vola, the motor spins and it closes. i have used a hight power motor to make sure the door closes ,and a special type of adhesive that bonds to the wood, it is designed to be rechargeible. 

Before ataching the wires to the esp32 vin, make sure , using a multi meter that that the wire coming from the buck converter has a voltage of 5v.Addionaly do the same for the remote


**onshape link** = https://cad.onshape.com/documents/bdd11de85f4570d51cb36bd7/w/b7536c01ad29c059d531be40/e/18cae29c07399e9e1a59fdc1?renderMode=0&uiState=6a0644923286901e478942eb


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

main meachnisim
step 1 : connect all the electronics.
step 2 : connect these parts like shown so
<img width="482" height="381" alt="image" src="https://github.com/user-attachments/assets/35f0c773-a427-409d-ba69-0411f42e06e3" />


step 3 :insert into mainframe like shown so
<img width="592" height="417" alt="image" src="https://github.com/user-attachments/assets/775ac7c0-9169-46fa-b4eb-01dd6f7bb59e" />
step 4 :insert the part shown into the pully system then attach the motor to it withh all the lectronics and set them in the case.
<img width="1215" height="327" alt="image" src="https://github.com/user-attachments/assets/5667d320-ce3b-40a8-91f3-95d18a61fdf6" />
step 5 :use three screws to secure the lid down
<img width="1332" height="540" alt="image" src="https://github.com/user-attachments/assets/a8847131-c2ac-43f2-a6ae-ef1f767a284e" />
step 6 :secure to the door using the 4 ,20mm screws <img width="842" height="457" alt="image" src="https://github.com/user-attachments/assets/14c9a15f-8c15-404c-b9e6-f5591c0df92d" />


step 7 : attach above the door using 4 screws.
<img width="516" height="352" alt="image" src="https://github.com/user-attachments/assets/5e7975af-ab9b-40c2-a3d3-26c19963dbbe" />
step 8 : knot 1 end of the fishing line to the hole in the pulley wheel and tie the other end to the hook above the door.
<img width="1157" height="815" alt="image" src="https://github.com/user-attachments/assets/73b67b78-9201-4ae9-b1d9-ab369c6ba442" />

**the remote**
step 1 : put the button throught the hole in the lid
<img width="380" height="382" alt="image" src="https://github.com/user-attachments/assets/e3373d02-2956-492f-b2d2-9bda6ebd830d" />
step 2 : attach the elctronics
step 3 : close the lid and screw down usong 4 screws.





