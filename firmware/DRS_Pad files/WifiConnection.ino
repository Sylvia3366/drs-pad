#include <WiFi.h>

//change to your own network :)
const char* ssid = "USERNAME";
const char* password = "PASSWORD";

void connectToWiFi() {
  Serial.print("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.print("Connected to WiFi with IP: ");
  Serial.println(WiFi.localIP());
}