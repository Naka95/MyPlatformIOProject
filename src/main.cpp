#include <Arduino.h>
int Led1 = 23;
int Led2 = 19;
int Led3 = 18;
int Led4 = 5;
int Led5 = 17;
int Led6 = 16;
int Led7 = 4;
int Led8 = 0;
int potPin = 36;
void setup(){
    pinMode (Led1,OUTPUT);
    pinMode (Led2,OUTPUT);
    pinMode (Led3,OUTPUT);
    pinMode (Led4,OUTPUT);
    pinMode (Led5,OUTPUT);
    pinMode (Led6,OUTPUT);
    pinMode (Led7,OUTPUT);
    pinMode (Led8,OUTPUT);
}
void loop() {
    int potValue = analogRead(potPin); // Read analog signal from potentiometer
    int range = map(potValue, 0, 4095, 0, 4000); // change analog from 0-4095 signal to 0-4000

    // all light off
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    digitalWrite(Led6, LOW);
    digitalWrite(Led7, LOW);
    digitalWrite(Led8, LOW);

    // turn on light by range 
    if (range >= 0 && range < 500) {
        digitalWrite(Led1, HIGH);
    }
    else if (range >= 500 && range < 1000) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
    }
    else if (range >= 1000 && range < 1500) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
    }
    else if (range >= 1500 && range < 2000) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
    }
    else if (range >= 2000 && range < 2500) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
        digitalWrite(Led5, HIGH);
    }
    else if (range >= 2500 && range < 3000) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
        digitalWrite(Led5, HIGH);
        digitalWrite(Led6, HIGH);
    }
    else if (range >= 3000 && range < 3500) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
        digitalWrite(Led5, HIGH);
        digitalWrite(Led6, HIGH);
        digitalWrite(Led7, HIGH);
    }
    else if (range >= 3500 && range <= 4000) {
        digitalWrite(Led1, HIGH);
        digitalWrite(Led2, HIGH);
        digitalWrite(Led3, HIGH);
        digitalWrite(Led4, HIGH);
        digitalWrite(Led5, HIGH);
        digitalWrite(Led6, HIGH);
        digitalWrite(Led7, HIGH);
        digitalWrite(Led8, HIGH);
    }

    delay(10);
}