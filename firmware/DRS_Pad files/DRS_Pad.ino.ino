#include "USBHIDKeyboard.h"
#include <TFT_eSPI.h>
#include "HardwareConfig.h"

const uint8_t keyMap[] = {
  KEY_F1, KEY_F2, KEY_F3,
  KEY_F4, KEY_F5, KEY_F6,
  KEY_F7, KEY_F8, KEY_F9
};

void connectToWiFi();
void drawStaticGrid();
void scanKeyMatrix();
void fetchF1Data();

USBHIDKeyboard Keyboard;
TFT_eSPI tft = TFT_eSPI();
unsigned long lastFetch = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
  //wifi
  connectToWiFi();
  //hardware
  Keyboard.begin();
  tft.init();
  tft.setRotation(1); //or 3, check when building
  //ui
  drawStaticGrid();
  fetchF1Data();
}

unsigned long lastSwitchTime = 0;
const unsigned long interval = 60000;
bool showWDC = true;

vvoid loop() {
  unsigned long currentTime = millis();

  if (WiFi.status() != WL_CONNECTED) {
    connectToWiFi();
  }

  if (isRaceDay) {
    if (currentTime - lastFetch >= 60000) {
      fetchF1Data();
      lastFetch = currentTime;
    }
  } else {
    if (currentTime - lastSwitchTime >= interval) {
      lastSwitchTime = currentTime;
      showWDC = !showWDC; 
      refreshDisplay();
    }
  }

  scanKeyMatrix();
}
