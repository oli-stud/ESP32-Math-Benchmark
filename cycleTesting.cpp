#pragma GCC optimize ("O0")

#include "CycleTesting.h"
#include <Arduino.h>
#include <math.h>

CycleTesting::CycleTesting(float floatA, float floatB, int intA, int intB, int iterations) : floatA(floatA), floatB(floatB), intA(intA), intB(intB), iterations(iterations) {
    addition(iterations);
    subtraction(iterations);
    multiply(iterations);
    division(iterations);

    sinus(iterations);
    cosinus(iterations);
    tangens(iterations);

    loop(iterations);
}

void CycleTesting::addition(int iterations) {
    volatile float add_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        add_result = floatA + floatB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Addition Zeit (in CPU-Zyklen):       float: ");
    Serial.print(endZyklus - startZyklus);
   
    volatile int add_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        add_result_int = intA + intB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("     int: ");
    Serial.println(endZyklus - startZyklus);

}

void CycleTesting::subtraction(int iterations) {
    volatile float sub_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        sub_result = floatA - floatB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Subtraktion Zeit (in CPU-Zyklen):    float; ");
    Serial.print(endZyklus - startZyklus);

    volatile int sub_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        sub_result_int = intA - intB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("     int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::multiply(int iterations) {
    volatile float mul_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        mul_result = floatA * floatB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Multiplikation Zeit (in CPU-Zyklen): float: ");
    Serial.print(endZyklus - startZyklus);
    
    volatile int mul_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        mul_result_int = intA * intB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("     int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::division(int iterations) {
    volatile float div_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        div_result = floatA / floatB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Division Zeit (in CPU-Zyklen):       float: ");
    Serial.print(endZyklus - startZyklus);
    
    volatile int div_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        div_result_int = intA / intB;
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("     int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::sinus(int iterations) {
    volatile float sin_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        sin_result = sin(floatA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Sinus Zeit (in CPU-Zyklen):          float: ");
    Serial.print(endZyklus - startZyklus);
    
    volatile int sin_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        sin_result_int = sin(intA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("   int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::cosinus(int iterations) {
    volatile float cos_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        cos_result = cos(floatA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Cosinus Zeit (in CPU-Zyklen):        float: ");
    Serial.print(endZyklus - startZyklus);

    volatile int cos_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        cos_result_int = cos(intA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("   int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::tangens(int iterations) {
    volatile float tan_result;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        tan_result = tan(floatA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Tangens Zeit (in CPU-Zyklen):        float: ");
    Serial.print(endZyklus - startZyklus);

    volatile int tan_result_int;
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
        tan_result_int = tan(intA);
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("   int: ");
    Serial.println(endZyklus - startZyklus);
}

void CycleTesting::loop(int iterations) {
    startZyklus = esp_cpu_get_cycle_count();
    for (int i = 0; i < iterations; i++) {
    }
    endZyklus = esp_cpu_get_cycle_count();
    Serial.print("Schleifen Zeit (in CPU-Zyklen):             ");
    Serial.println(endZyklus - startZyklus);
}