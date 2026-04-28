// ============================================================
//  RECEIVER (Motor Controller Side)
//  Board: ESP32 Dev Module
//  Upload this to the ESP32 connected to the L298N.
// ============================================================

#include <esp_now.h>
#include <WiFi.h>

// --- PINS ----------------------------------------------------
const int IN1 = 12;   // PWM speed pin  → L298N IN1
const int IN2 = 13;   // Direction pin  → L298N IN2  (held LOW = forward)
// -------------------------------------------------------------

// --- SPEED TUNING --------------------------------------------
// Range: 0 (stopped) to 255 (full speed).
// Start at 100. If the motor hums but won't spin, raise to 130-160.
// If it's too fast, lower to 70-80.
int crawlSpeed = 100;
// -------------------------------------------------------------

// Motor state — toggled each time a command arrives
volatile bool motorActive = false;

// Message structure — must match sender exactly
typedef struct struct_message {
  bool toggleCmd;
} struct_message;

struct_message incomingData;   // Global buffer for received data

// *** FIX: parameter renamed to 'data' so it no longer shadows
//          the global 'incomingData' struct above.
//          (Original code had both named 'incomingData', causing
//           memcpy to corrupt the local pointer instead of filling
//           the global struct — resulting in a silent crash.)
void OnDataRecv(const uint8_t *mac, const uint8_t *data, int len) {
  memcpy(&incomingData, data, sizeof(incomingData));  // Safe copy into global

  motorActive = !motorActive;   // Flip the toggle

  Serial.print("Command received. Motor: ");
  Serial.println(motorActive ? "ON (Crawling)" : "OFF (Stopped)");
}

void setup() {
  Serial.begin(115200);

  // Motor pins
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  // Make sure motor is stopped at boot
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed — halting.");
    while (true) {}
  }

  esp_now_register_recv_cb(esp_now_recv_cb_t(OnDataRecv));

  Serial.println("Receiver ready. Waiting for toggle commands...");
}

void loop() {
  if (motorActive) {
    // --- FORWARD CRAWL (Method B: PWM on IN1, IN2 held LOW) ---
    // analogWrite works natively on ESP32 Arduino core 3.x+
    analogWrite(IN1, crawlSpeed);
    digitalWrite(IN2, LOW);
  } else {
    // --- STOP ---
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }

  delay(10);   // Small yield to keep the watchdog happy
}
