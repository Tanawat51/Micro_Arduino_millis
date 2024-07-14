#include <Arduino.h>
#define BTN 12
int counterVal = 0;
boolean buttonState;



void setup() {
  Serial.begin(9600);
  pinMode(BTN, OUTPUT);
}

void loop() {
  if (debounceButton(BTN) == HIGH && buttonState == LOW) {
    counterVal = counterVal + 1;
    Serial.print("Counter : ");
    Serial.println(counterVal);
    buttonState = HIGH;
  }
  else if (debounceButton(BTN) == LOW && buttonState == HIGH)
  {
    buttonState = LOW;
  }
}
// ฟังก์ชั่น Debounce on a Push Button
boolean debounceButton(boolean state) {
  boolean stateNow = digitalRead(BTN);
  if (state != stateNow)
  {
    delay(10);
    stateNow = digitalRead(BTN);
  }
  return stateNow;
}