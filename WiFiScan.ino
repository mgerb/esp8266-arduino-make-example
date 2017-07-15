/*
 *  This sketch demonstrates how to scan WiFi networks. 
 *  The API is almost the same as with the WiFi Shield library, 
 *  the most obvious difference being the different file you need to include:
 */

 // This is an example provided by ESP8266 Arduino

#include "ESP8266WiFi.h"
#include "Controller.h"

Controller c;

void setup() {
  c.setup();
}

void loop() {
  c.start();
}
