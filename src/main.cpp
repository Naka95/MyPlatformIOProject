#include <Arduino.h>

int ledPin = 23;

void setup() {
  ledcAttachPin(ledPin, 0);
}

void loop() {
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(0, dutyCycle);
    delay(10);
  }

  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(0, dutyCycle); // decrease brightness from 255 to 0
    delay(10);
  }

}