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
