#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    delay(1000);
    Serial.println("Hello Home Hub!");
}

void loop() {
    Serial.println("ESP32 is alive!");
    delay(1000);
}