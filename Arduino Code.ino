#include <WiFi.h>

// Replace with your primary Wi-Fi credentials
const char* ssid = "YOUR_PRIMARY_WIFI_SSID";
const char* password = "YOUR_PRIMARY_WIFI_PASSWORD";

// New Wi-Fi network name and password for the repeater
const char* apSSID = "ESP32_Repeater";
const char* apPassword = "password123";

void setup() {
  // Initialize serial communication
  Serial.begin(115200);

  // Connect to the primary Wi-Fi network
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to Primary Wi-Fi");

  // Start the ESP32 as an Access Point
  WiFi.softAP(apSSID, apPassword);
  Serial.println("Access Point Started");
  Serial.print("Connect to: ");
  Serial.println(apSSID);
  Serial.print("Password: ");
  Serial.println(apPassword);
}

void loop() {
  // Maintain the connection and handle any tasks
}
