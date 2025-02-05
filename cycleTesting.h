#ifndef CYCLETESTING_H
#define CYCLETESTING_H

#include "esp_system.h"

class CycleTesting {
private:

    float floatA;
    float floatB;
    int intA;
    int intB;
    int iterations;
    uint32_t startZyklus;
    uint32_t endZyklus;

public:
    CycleTesting(float floatA, float floatB, int intA, int intB, int iterations);

    void addition(int iterations);
    void subtraction(int iterations);
    void multiply(int iterations);
    void division(int iterations);

    void sinus(int iterations);
    void cosinus(int iterations);
    void tangens(int iterations);

    void loop(int iterations);
};

#endif