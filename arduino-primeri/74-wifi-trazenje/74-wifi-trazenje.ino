// skenira dostupne wifi mreže (zvaničan primer)
#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200);
  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  Serial.println("sve spremno");
}

void loop() {
  Serial.println("počinjem traženje");
  int n = WiFi.scanNetworks(); // return number of networks found
  if (n == 0) {
    Serial.println("mreže nisu nađene");
  } else {
    Serial.print(n);
    Serial.println(" nađenih mreža");
    for (int i = 0; i < n; ++i) {
      // Print SSID and RSSI for each network found
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (");
      Serial.print(WiFi.RSSI(i));
      Serial.print(")");
      Serial.println((WiFi.encryptionType(i) == ENC_TYPE_NONE) ? " " : "*");
      delay(10);
    }
  }
  Serial.println("");
  delay(5000);
}