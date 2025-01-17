#include <WiFi.h>
#include "esp_wifi.h"


const char* ssid     = "ESP32";
const char* password = "987654321";

void setup()
{
    Serial.begin(115200);
    Serial.println("\n[*] Creating AP");
    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid, password);
    Serial.print("[+] AP Created with IP Gateway ");
    Serial.println(WiFi.softAPIP());
}

void loop(){}
