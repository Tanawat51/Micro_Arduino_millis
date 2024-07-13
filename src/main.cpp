#include <Arduino.h>

void setup() {
Serial.begin(9600);
Serial.println("Start Program");
}

void loop() {
  unsigned long time1 = millis();
  Serial.println(time1);
  delay(1000);
}

