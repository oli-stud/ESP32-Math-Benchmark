#include <Arduino.h>
#include "timeTesting.h"
#include "cycleTesting.h"

void setup() {
    Serial.begin(115200);
    delay(2000);
    setCpuFrequencyMhz(240);

    float floatA = 235.45;
    float floatB = 175.93;
    int intA = 23545;
    int intB = 17593;
    int iterations = 1000;

    //TimeTesting tTest(235.45, 175.93, 1000);
    TimeTesting tTest(235.45, 175.93, 23545, 17593, 1000);
    Serial.println("------------");
    CycleTesting cTest(235.45, 175.93, 23545, 17593, 1000);
    Serial.println("------------");
}

void loop() {
    // Leerlauf
}

