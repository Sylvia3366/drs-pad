#include <ArduinoJson.h>
#include <HTTPClient.h>

extern int liveData[9]; 
extern bool isRaceDay;

void fetchF1Data() {
  HTTPClient http;
  http.begin("https://api.openf1.org/v1/position?session_key=9158"); 
  int httpCode = http.GET();

  if (httpCode == HTTP_CODE_OK) {
    String payload = http.getString();
    StaticJsonDocument<8192> doc; 
    DeserializationError error = deserializeJson(doc, payload);

    if (!error) {
      isRaceDay = true;
      for (int i = 0; i < 9; i++) {
          liveData[i] = doc[i]["driver_number"];
      }
      refreshDisplay(); 
    }
  } else {
      isRaceDay = false;
  }
  http.end();
}