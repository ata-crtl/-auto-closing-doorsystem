# Automatic Door Closer

This is a rechargible door closer, it is designed to comabt the issue of people always leaveing my door open.You push the button once and there you go , the motor pulls in the fishing wire meaning you now have the ability to close the door from your bed. 

This system has a seprate remote and employs to esp32s to comunicate amongst each other and close the door from your bed. It is also desighned to be rechargible so you can maintain it.

## Features

- Rechargeable power system.
- ESP32 based control system.
- Separate remote Control
- Made to mount onto a door and above the door frame.

## Important Safety Check

Before attaching the wires to the ESP32 VIN pin, use a multimeter to make sure the wire coming from the buck converter is **5V** to not fry your esp and the same for the remote power output before connecting it to the ESP32.

## CAD

**Onshape link:**  
[View the Onshape model](https://cad.onshape.com/documents/bdd11de85f4570d51cb36bd7/w/b7536c01ad29c059d531be40/e/07df8b484f8b3f7ee84a2b9b?renderMode=0&uiState=6a15705f002f3bb3f2bcfc0f)

## Main Build Preview

<img width="452" height="672" alt="image" src="https://github.com/user-attachments/assets/355bad04-d477-4f6e-af7f-f23c8c8afd7e" />


## Bill of Materials

| Item | Notes | Link |
|------|-------|------|
| ESP32 | Main controller for the door closer | https://www.aliexpress.com/item/1005008981904299.html?spm=a2g0o.productlist.main.8.62bc51b1bpFCyr&aem_p4p_detail=20260424134515158164843320540002079238&algo_pvid=e2d77212-a16c-4666-9f8f-54137adc204f&algo_exp_id=e2d77212-a16c-4666-9f8f-54137adc204f-7&pdp_ext_f=%7B%22order%22%3A%22947%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%211.59%211.59%21%21%2114.22%2114.22%21%40211b430817770635152812510ec4d1%2112000056457056505%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=QJ0YR3t2WHge&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008981904299%7C_p_origin_prod%3A&search_p4p_id=20260424134515158164843320540002079238_2 |
| ESP32 | Controller used in the sender remote | https://www.aliexpress.com/item/1005008981904299.html?spm=a2g0o.productlist.main.8.62bc51b1bpFCyr&aem_p4p_detail=20260424134515158164843320540002079238&algo_pvid=e2d77212-a16c-4666-9f8f-54137adc204f&algo_exp_id=e2d77212-a16c-4666-9f8f-54137adc204f-7&pdp_ext_f=%7B%22order%22%3A%22947%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%211.59%211.59%21%21%2114.22%2114.22%21%40211b430817770635152812510ec4d1%2112000056457056505%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=QJ0YR3t2WHge&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008981904299%7C_p_origin_prod%3A&search_p4p_id=20260424134515158164843320540002079238_2 |
| L298N motor driver | Drives the main motor | https://www.aliexpress.com/item/1005006794464360.html?spm=a2g0o.productlist.main.2.550623bd1zgbg2&algo_pvid=4ada4e67-d88a-4ed2-9770-8715caf4acb3&algo_exp_id=4ada4e67-d88a-4ed2-9770-8715caf4acb3-1&pdp_ext_f=%7B%22order%22%3A%2222%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%213.67%211.10%21%21%2132.81%219.84%21%40211b431017771111187847132e1a1e%2112000038325476198%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=icuTPAe6avr6&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005006794464360%7C_p_origin_prod%3A |
| High-power motor | Provides the force to close the door | https://www.aliexpress.com/item/1005008531655044.html?spm=a2g0o.productlist.main.4.4545SiKRSiKR8g&algo_pvid=9d886e09-35ff-45c4-a0f1-5cdd190b6b15&algo_exp_id=9d886e09-35ff-45c4-a0f1-5cdd190b6b15-3&pdp_ext_f=%7B%22order%22%3A%223%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%2110.48%218.59%21%21%2193.74%2176.84%21%40211b807017769680362464989e8d78%2112000045585570991%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=7DNxVExLPLAy&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008531655044%7C_p_origin_prod%3A |
| USB-C charging module | Charges the battery in the main unit | https://www.aliexpress.com/item/1005009041347980.html?spm=a2g0o.productlist.main.8.7459kMKCkMKCzs&algo_pvid=f8775c2b-2502-43a3-b05f-c1581419cdfc&algo_exp_id=f8775c2b-2502-43a3-b05f-c1581419cdfc-7&pdp_ext_f=%7B%22order%22%3A%22110%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%212.88%210.76%21%21%213.77%211.00%21%40211b615317771206584197448ee187%2112000051530290384%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895%3BpisId%3A5000000203582505&curPageLogUid=TGs7hIvKGiPt&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005009041347980%7C_p_origin_prod%3A |
| TP4056 charging module | Charges the battery in the remote | https://www.aliexpress.com/item/1005012026232715.html?pdp_npi=6%40dis%21GBP%210.30%210.27%21%21%212.72%212.45%21%4021013cc617781055801318567e0f51%2112000057312253272%21affd%21%21%21%211%210%21&dp=CjwKCAjwwpDQBhAuEiwAa-4Wo1-4fzyehwf6L9_Pe6LEA07Wt6GDj-NT79NrA98JhCW1bBEpLnjLhxoCjQ8QAvD_BwE%7C0AAAAA_4-1LnVxctBmWM_HRLZZKTSrtLBD%7CCj8KCQjwn4vQBhDfARIuAJv-4v-1MXj956tHRuKv9njTJxUrSeDfJJBdZL-a2NKWMyZFcYt_kygywCJeKRoCnGo%7Cv1&cn=gb_a&gad_source=1&aff_fcid=648b4317d25b49e98e6c17040d009a1c-1778694635938-05181-_onKPRpM&aff_fsk=_onKPRpM&aff_platform=api-new-product-query&sk=_onKPRpM&aff_trace_key=648b4317d25b49e98e6c17040d009a1c-1778694635938-05181-_onKPRpM&terminal_id=515058c82b1144e1aee3d2b61b2c1bac&afSmartRedirect=y |
| Buck converter | Steps voltage down to 5V for the ESP32 | https://www.aliexpress.com/item/1005011787585923.html?spm=a2g0o.productlist.main.8.6fcbRDzqRDzqrs&aem_p4p_detail=202604250344461190313175908600001890942&algo_pvid=70a7ecd7-0bd4-4c18-8d94-6c3f8e0ea215&algo_exp_id=70a7ecd7-0bd4-4c18-8d94-6c3f8e0ea215-7&pdp_ext_f=%7B%22order%22%3A%22232%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%210.61%210.46%21%21%215.50%214.18%21%402103892f17771138860137328e0563%2112000056552345476%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=YjcrZrW1Brqj&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005011787585923%7C_p_origin_prod%3A&search_p4p_id=202604250344461190313175908600001890942_2 |
| Boost/step-up module | Steps voltage up for the remote ESP32 | https://www.aliexpress.com/item/1005008964880397.html?spm=a2g0o.productlist.main.4.19bb6bcc6Afvnw&aem_p4p_detail=202605131106111865712689600080001546293&algo_pvid=9745009d-8ee1-46a9-ba6d-50bf0ab0b056&algo_exp_id=9745009d-8ee1-46a9-ba6d-50bf0ab0b056-3&pdp_ext_f=%7B%22order%22%3A%2211%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%211.72%211.36%21%21%212.26%211.79%21%40211b6c1717786955710031216efdaf%2112000047393660140%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=0kPCptXNzxTl&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008964880397%7C_p_origin_prod%3A&search_p4p_id=202605131106111865712689600080001546293_1 |
| Rechargeable battery | Main power source (12V) | https://www.aliexpress.com/item/32991156265.html?spm=a2g0o.productlist.main.10.2f9a7091IuNiBk&algo_pvid=435012a1-9dca-4f20-ba7f-c0af582a3772&algo_exp_id=435012a1-9dca-4f20-ba7f-c0af582a3772-9&pdp_ext_f=%7B%22order%22%3A%2272%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%216.98%215.93%21%21%219.13%217.76%21%40211b628117771126184577253e1c3f%2166876190895%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=CGYJoRuEcVPL&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A32991156265%7C_p_origin_prod%3A |
| Rechargeable battery | Remote power source (3.7V) | https://www.aliexpress.com/item/1005008217717191.html?spm=a2g0o.productlist.main.12.5718210dKyf2pF&aem_p4p_detail=20260513105835156520255423200001324318&algo_pvid=6d98faa5-aed7-4055-9b38-35be6c125384&algo_exp_id=6d98faa5-aed7-4055-9b38-35be6c125384-11&pdp_ext_f=%7B%22order%22%3A%22289%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%218.15%213.66%21%21%2172.74%2132.64%21%402103864c17786951149623978ed0b6%2112000044268208538%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895%3BpisId%3A5000000206380079&curPageLogUid=0eatIcatYKIL&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008217717191%7C_p_origin_prod%3A&search_p4p_id=20260513105835156520255423200001324318_3 |
| Push button | Used to trigger the system | https://www.aliexpress.com/item/1005007604615720.html?spm=a2g0o.productlist.main.14.4461eKkreKkr2B&algo_pvid=053ae837-c9af-4f31-ac05-44eb5aeb5573&algo_exp_id=053ae837-c9af-4f31-ac05-44eb5aeb5573-13&pdp_ext_f=%7B%22order%22%3A%224784%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%211.52%210.75%21%21%2113.64%216.73%21%4021038e1e17774091854333252ed139%2112000041477575655%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895%3BpisId%3A5000000203582505&curPageLogUid=HykUMbSzUJwT&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005007604615720%7C_p_origin_prod%3A |
| Fishing line | Connects the pulley system to the door | https://www.aliexpress.com/item/1005003972138352.html?spm=a2g0o.productlist.main.7.5f2c75b3WTHMWp&algo_pvid=334d2d92-0cf0-43da-9755-0bcb2091e4f3&algo_exp_id=334d2d92-0cf0-43da-9755-0bcb2091e4f3-6&pdp_ext_f=%7B%22order%22%3A%229105%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%213.24%210.75%21%21%214.25%210.98%21%402103891017768925435253315efd7e%2112000027605826581%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895%3BpisId%3A5000000203582506&curPageLogUid=2XcZ4Ww9MPOc&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005003972138352%7C_p_origin_prod%3A |
| Screws | Used to mount the mechanism and close the case (8mm) | https://www.aliexpress.com/item/1005003986879500.html?spm=a2g0o.detail.similar_items.7.5b26HcHwHcHwhL&utparam-url=scene%3Aimage_search%7Cquery_from%3Aapp_pdp_sold_out%7Cx_object_id%3A1005003986879500%7C_p_origin_prod%3A&algo_pvid=17bb69c1-43c7-4c1b-a1b4-251970331ad7&algo_exp_id=17bb69c1-43c7-4c1b-a1b4-251970331ad7&pdp_ext_f=%7B%22order%22%3A%224284%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%210.72%210.45%21%21%210.94%210.59%21%40211b613917774090360825465e973e%2112000027650242432%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895 |
| Screws | Used to mount the mechanism and close the case (20mm) | https://www.aliexpress.com/item/1005008669605569.html?spm=a2g0o.productlist.main.16.2ff11db1RbZcPA&aem_p4p_detail=202605121313537576129316918700001385044&algo_pvid=fb3f710e-d009-4175-915b-beec8cc43528&algo_exp_id=fb3f710e-d009-4175-915b-beec8cc43528-15&pdp_ext_f=%7B%22order%22%3A%221007%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%211.04%210.73%21%21%219.28%216.50%21%402103892f17786168333658285ed62f%2112000046169312272%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895&curPageLogUid=YJ37Ofc631Vz&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008669605569%7C_p_origin_prod%3A&search_p4p_id=202605121313537576129316918700001385044_4 |
| Threaded inserts | Brass heat-set inserts for housing assembly | https://www.aliexpress.com/item/1005008897571758.html?spm=a2g0o.productlist.main.4.47c37bacDweEYF&aem_p4p_detail=2026052510372814543796407875500000681499&algo_pvid=5c87a641-4d58-42b8-b500-bc0005122b02&algo_exp_id=5c87a641-4d58-42b8-b500-bc0005122b02-3&pdp_ext_f=%7B%22order%22%3A%2213276%22%2C%22spu_best_type%22%3A%22price%22%2C%22eval%22%3A%221%22%2C%22fromPage%22%3A%22search%22%7D&pdp_npi=6%40dis%21GBP%216.01%210.99%21%21%2153.35%218.77%21%402103835c17797306485975727e0f29%2112000047114716488%21sea%21UK%217502065942%21ABX%211%210%21n_tag%3A-29910%3Bd%3Af3d885b8%3Bm03_new_user%3A-29895%3BpisId%3A5000000207325688&curPageLogUid=Z5a6lezLlS6j&utparam-url=scene%3Asearch%7Cquery_from%3A%7Cx_object_id%3A1005008897571758%7C_p_origin_prod%3A&search_p4p_id=2026052510372814543796407875500000681499_1 |
| Adhesive for wood | Used where needed for secure mounting | N/A |
| Multimeter | Needed to verify output voltage before wiring | N/A |
## Main Unit Connections

| Part | Pin | Connects to |
|------|-----|-------------|
| USB-C charging module | VO+ | Battery red (+) |
| USB-C charging module | VO- | Battery black (-) |
| Battery | Red (+) | Buck converter IN+ |
| Battery | Black (-) | Buck converter IN- |
| Battery | Black (-) | L298N GND terminal |
| Battery | Black (-) | USB-C module VO- |
| Buck converter | OUT+ | ESP32 VIN or 5V |
| Buck converter | OUT- | ESP32 GND |
| Battery | Red (+) | L298N 12V |
| Battery | Black (-) | L298N GND terminal |
| ESP32 | GPIO 12 | L298N IN1 |
| ESP32 | GPIO 13 | L298N IN2 |

<img width="3508" height="2480" alt="Main unit wiring diagram" src="https://github.com/user-attachments/assets/dffa8311-d884-44aa-8000-76867a76e0b3" />

## Sender Remote Connections

| Part | Pin | Connects to |
|------|-----|-------------|
| Button | Leg 1 | ESP32 GPIO 15 |
| Button | Leg 2 | ESP32 GND |
| Battery | Positive | TP4056 B+ |
| Battery | Negative | TP4056 B- |
| TP4056 | OUT+ | Boost module VIN+ |
| TP4056 | OUT- | Boost module VIN- |
| Step-up module | VOUT+ | ESP32 5V |
| Step-up module | VOUT- | ESP32 GND |

## Electronics Overview

<img width="552" height="276" alt="Electronics overview" src="https://github.com/user-attachments/assets/2daa2f66-122b-4983-a579-9aaa15454b40" />

## Assembly Instructions

### Main Mechanism

**Step 1:** Connect all the electronics.

**Step 2:** Connect these parts as shown below.

<img width="482" height="381" alt="Assembly step 2" src="https://github.com/user-attachments/assets/35f0c773-a427-409d-ba69-0411f42e06e3" />

**Step 3:** Insert the assembly into the main frame as shown.

<img width="592" height="417" alt="Assembly step 3" src="https://github.com/user-attachments/assets/775ac7c0-9169-46fa-b4eb-01dd6f7bb59e" />

**Step 4:** Insert the part shown into the pulley system, then attach the motor.

<img width="1215" height="327" alt="Assembly step 4" src="https://github.com/user-attachments/assets/5667d320-ce3b-40a8-91f3-95d18a61fdf6" />

**Step 5:** Insert the heated threaded inserts in the locations shown below.

<img width="1245" height="686" alt="Threaded inserts 1" src="https://github.com/user-attachments/assets/b287b5ce-b364-4d46-a53c-18261e3a52a8" />

<img width="941" height="716" alt="Threaded inserts 2" src="https://github.com/user-attachments/assets/4ea8070c-2e8b-46e9-83a0-7a63b88441cb" />

<img width="762" height="581" alt="Threaded inserts 3" src="https://github.com/user-attachments/assets/1ee3a7a4-246d-42ec-9731-b988ca665dbf" />

<img width="685" height="408" alt="Threaded inserts 4" src="https://github.com/user-attachments/assets/97860aa0-069a-4aa9-91e0-e87e1e553273" />

<img width="574" height="333" alt="Threaded inserts 5" src="https://github.com/user-attachments/assets/d4da18b2-169c-4a2a-9305-649a9400c707" />

**Step 6:** Secure the motor using the inserts as shown.

<img width="762" height="581" alt="Motor secured" src="https://github.com/user-attachments/assets/be93524b-bd7f-47ef-a621-e62f62c367cf" />

**Step 7:** Use three screws to secure the lid.

<img width="1332" height="540" alt="Assembly step 5" src="https://github.com/user-attachments/assets/a8847131-c2ac-43f2-a6ae-ef1f767a284e" />

**Step 8:** Secure the unit to the door using four 20 mm screws.

<img width="842" height="457" alt="Assembly step 6" src="https://github.com/user-attachments/assets/14c9a15f-8c15-404c-b9e6-f5591c0df92d" />

**Step 9:** Attach the top mount above the door using four screws.

<img width="516" height="352" alt="Assembly step 7" src="https://github.com/user-attachments/assets/5e7975af-ab9b-40c2-a3d3-26c19963dbbe" />

**Step 10:** Tie one end of the fishing line to the hole in the pulley wheel and the other end to the hook above the door.

<img width="1157" height="815" alt="Assembly step 8" src="https://github.com/user-attachments/assets/73b67b78-9201-4ae9-b1d9-ab369c6ba442" />

### Remote

**Step 1:** Put the button through the hole in the lid.

<img width="380" height="382" alt="Remote step 1" src="https://github.com/user-attachments/assets/e3373d02-2956-492f-b2d2-9bda6ebd830d" />

**Step 2:** Attach the electronics.

**Step 3:** Close the lid and screw it down using four screws.


