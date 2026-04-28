// ============================================================
//  SENDER (Remote / Button Side)
//  Board: ESP32 Dev Module
//  Upload this to the ESP32 that has the button.
// ============================================================

#include <esp_now.h>
#include <WiFi.h>

// --- CONFIG --------------------------------------------------
const int BUTTON_PIN = 15;       // Button wired between GPIO 15 and GND
const unsigned long DEBOUNCE_MS = 50;
// -------------------------------------------------------------

// Broadcast to all nearby ESP32s (no pairing needed)
uint8_t broadcastAddress[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

esp_now_peer_info_t peerInfo;

// Message structure — must match receiver exactly
typedef struct struct_message {
  bool toggleCmd;
} struct_message;

struct_message myData;

// Debounce state
int           lastButtonState   = HIGH;
unsigned long lastDebounceTime  = 0;

// Optional: called after each send so you can see if it worked
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  Serial.print("Send status: ");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "OK" : "FAIL");
}

void setup() {
  Serial.begin(115200);

  // INPUT_PULLUP: pin floats HIGH, goes LOW when button pressed
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  WiFi.mode(WIFI_STA);

  if (esp_now_init() != ESP_OK) {
    Serial.println("ESP-NOW init failed — halting.");
    while (true) {}   // Stop here so you see the error
  }

  esp_now_register_send_cb(OnDataSent);

  // Register broadcast peer
  memcpy(peerInfo.peer_addr, broadcastAddress, 6);
  peerInfo.channel = 0;
  peerInfo.encrypt = false;

  if (esp_now_add_peer(&peerInfo) != ESP_OK) {
    Serial.println("Failed to add peer — halting.");
    while (true) {}
  }

  Serial.println("Sender ready. Press button to toggle motor.");
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  // Restart debounce timer whenever the reading changes
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // Only act once the reading has been stable for DEBOUNCE_MS
  if ((millis() - lastDebounceTime) > DEBOUNCE_MS) {
    if (reading == LOW) {                      // Button pressed
      myData.toggleCmd = true;
      esp_now_send(broadcastAddress, (uint8_t *)&myData, sizeof(myData));
      Serial.println("Toggle command sent.");

      // Wait for release so we only fire once per press
      while (digitalRead(BUTTON_PIN) == LOW) {
        delay(10);
      }
    }
  }

  lastButtonState = reading;
}
