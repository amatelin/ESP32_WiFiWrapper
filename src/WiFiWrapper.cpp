//
//  WiFiWrapper.cpp
//  WiFi wrapper over WiFi lib for easier use
//
//  Created by Alexis Matelin on 02/06/2019.
//
//

#include "WiFiWrapper.hpp"
#include <WiFi.h>
#include <WiFiUdp.h>

WiFiWrapperClass::WiFiWrapperClass()  {}
WiFiWrapperClass::~WiFiWrapperClass() {}

void WiFiWrapperClass::setup(const char *ssid, const char *password) {
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);
  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    Serial.println("Connection Failed! Rebooting...");
    delay(5000);
    ESP.restart();
  }
}
