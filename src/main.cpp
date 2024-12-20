#include <Arduino.h>

int Led1 = 23;
int Led2 = 19;
int Led3 = 18;
int Led4 = 5;
int Led5 = 17;
int Led6 = 16;
int Led7 = 4;
int Led8 = 0;
int potPin1 = 36;
int potPin2 = 39;

void setup() {
    pinMode(Led1, OUTPUT);
    pinMode(Led2, OUTPUT);
    pinMode(Led3, OUTPUT);
    pinMode(Led4, OUTPUT);
    pinMode(Led5, OUTPUT);
    pinMode(Led6, OUTPUT);
    pinMode(Led7, OUTPUT);
    pinMode(Led8, OUTPUT);

    Serial.begin(9600); // For debugging
}

void loop() {
    int potValue1 = analogRead(potPin1); // Read analog signal from potentiometer1
    int potValue2 = analogRead(potPin2); // Read analog signal from potentiometer2
    int range1 = map(potValue1, 0, 4095, 0, 4000); // Map analog range
    int range2 = map(potValue2, 0, 4095, 0, 4000); // Map analog range

    // Debug values
    Serial.print("Range1: ");
    Serial.println(range1);
    Serial.print("Range2: ");
    Serial.println(range2);

    // Reset all LEDs
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, LOW);
    digitalWrite(Led8, LOW);

    if (range1 >= 100 && range2 < 100) {
        // LEDs for range1 (Odd-numbered LEDs) are ON only if range2 is below 100
        if (range1 >= 100) {
            digitalWrite(Led1, HIGH);
        }
        if (range1 >= 1000) {
            digitalWrite(Led3, HIGH);
        }
        if (range1 >= 2000) {
            digitalWrite(Led5, HIGH);
        }
        if (range1 >= 3000) {
            digitalWrite(Led7, HIGH);
        }
    }

    if (range2 >= 100) {
        // LEDs for range2 (Even-numbered LEDs) turn on and turn off odd-numbered LEDs
        if (range2 >= 100) {
            digitalWrite(Led1, LOW);
            digitalWrite(Led2, HIGH);
            digitalWrite(Led3, HIGH);
            digitalWrite(Led4, LOW);
            digitalWrite(Led5, HIGH);
            digitalWrite(Led6, LOW);
            digitalWrite(Led7, HIGH);
            digitalWrite(Led8, LOW); 
        }
        if (range2 >= 1000) {
            digitalWrite(Led1, LOW);
            digitalWrite(Led2, HIGH);
            digitalWrite(Led3, LOW);
            digitalWrite(Led4, HIGH);
            digitalWrite(Led5, HIGH);
            digitalWrite(Led6, LOW);
            digitalWrite(Led7, HIGH);
            digitalWrite(Led8, LOW);
        }
        if (range2 >= 2000) {
            digitalWrite(Led1, LOW);
            digitalWrite(Led2, HIGH);
            digitalWrite(Led3, LOW);
            digitalWrite(Led4, HIGH);
            digitalWrite(Led5, LOW);
            digitalWrite(Led6, HIGH);
            digitalWrite(Led7, HIGH);
            digitalWrite(Led8, LOW);
        }
        if (range2 >= 3000) {
            digitalWrite(Led1, LOW);
            digitalWrite(Led2, HIGH);
            digitalWrite(Led3, LOW);
            digitalWrite(Led4, HIGH);
            digitalWrite(Led5, LOW);
            digitalWrite(Led6, HIGH);
            digitalWrite(Led7, LOW);
            digitalWrite(Led8, HIGH);
        }
    }

    delay(10); // Adjust delay as needed
}
