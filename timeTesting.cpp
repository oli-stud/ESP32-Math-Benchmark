#pragma GCC optimize ("O0")

#include "HardwareSerial.h"
#include "timeTesting.h"
#include <Arduino.h>
#include <math.h>

/**
TimeTesting::TimeTesting(float numA, float numB, int iterations) : numA(numA), numB(numB), iterations(iterations) {   
    addition(iterations);
    subtraction(iterations);
    multiply(iterations);
    division(iterations);

    sinus(iterations);
    cosinus(iterations);
    tangens(iterations);

    loop(iterations);
}

void TimeTesting::addition(int iterations) {
    volatile float add_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        add_result = numA + numB;
    }
    endZeit = micros();
    Serial.print("Addition Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::subtraction(int iterations) {
    volatile float sub_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sub_result = numA - numB;
    }
    endZeit = micros();
    Serial.print("Subtraktion Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::multiply(int iterations) {
    volatile float mul_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        mul_result = numA * numB;
    }
    endZeit = micros();
    Serial.print("Multiplikation Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::division(int iterations) {
    volatile float div_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
      div_result = numA / numB;
    }
    endZeit = micros();
    Serial.print("Division Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::sinus(int iterations) {
    volatile float sin_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sin_result = sin(numA);
    }
    endZeit = micros();
    Serial.print("Sinus Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::cosinus(int iterations) {
    volatile float cos_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        cos_result = cos(numA);
    }
    endZeit = micros();
    Serial.print("Cosinus Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::tangens(int iterations) {
    volatile float tan_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        tan_result = tan(numA);
    }
    endZeit = micros();
    Serial.print("Tangens Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::loop(int iterations) {
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {  
    }
    endZeit = micros();
    Serial.print("Schleifen Zeit (in Mikrosekunden): ");
    Serial.println(endZeit - startZeit);
}
*/



TimeTesting::TimeTesting(float floatA, float floatB, int intA, int intB, int iterations) : floatA(floatA), floatB(floatB), intA(intA), intB(intB), iterations(iterations) {   
    addition(iterations);
    subtraction(iterations);
    multiply(iterations);
    division(iterations);

    sinus(iterations);
    cosinus(iterations);
    tangens(iterations);

    loop(iterations);
}

void TimeTesting::addition(int iterations) {
    volatile float add_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        add_result = floatA + floatB;
    }
    endZeit = micros();
    Serial.print("Addition Zeit (in Mikrosekunden):        float: ");
    Serial.print(endZeit - startZeit);
    
    volatile int add_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        add_result_int = intA + intB;
    }
    endZeit = micros();
    Serial.print("     int: ");
    Serial.println(endZeit - startZeit);

    
}

void TimeTesting::subtraction(int iterations) {
    volatile float sub_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sub_result = floatA - floatB;
    }
    endZeit = micros();
    Serial.print("Subtraktion Zeit (in Mikrosekunden):     float: ");
    Serial.print(endZeit - startZeit);

    volatile int sub_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sub_result_int = intA - intB;
    }
    endZeit = micros();
    Serial.print("     int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::multiply(int iterations) {
    volatile float mul_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        mul_result = floatA * floatB;
    }
    endZeit = micros();
    Serial.print("Multiplikation Zeit (in Mikrosekunden):  float: ");
    Serial.print(endZeit - startZeit);

    volatile int mul_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        mul_result = intA * intB;
    }
    endZeit = micros();
    Serial.print("     int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::division(int iterations) {
    volatile float div_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
      div_result = floatA / floatB;
    }
    endZeit = micros();
    Serial.print("Division Zeit (in Mikrosekunden):        float: ");
    Serial.print(endZeit - startZeit);

    volatile int div_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
      div_result_int = intA / intB;
    }
    endZeit = micros();
    Serial.print("     int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::sinus(int iterations) {
    volatile float sin_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sin_result = sin(floatA);
    }
    endZeit = micros();
    Serial.print("Sinus Zeit (in Mikrosekunden):           float: ");
    Serial.print(endZeit - startZeit);

    volatile int sin_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        sin_result_int = sin(intA);
    }
    endZeit = micros();
    Serial.print("   int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::cosinus(int iterations) {
    volatile float cos_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        cos_result = cos(floatA);
    }
    endZeit = micros();
    Serial.print("Cosinus Zeit (in Mikrosekunden):         float: ");
    Serial.print(endZeit - startZeit);

    volatile int cos_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        cos_result_int = cos(intA);
    }
    endZeit = micros();
    Serial.print("   int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::tangens(int iterations) {
    volatile float tan_result;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        tan_result = tan(floatA);
    }
    endZeit = micros();
    Serial.print("Tangens Zeit (in Mikrosekunden):         float: ");
    Serial.print(endZeit - startZeit);

    volatile int tan_result_int;
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {
        tan_result_int = tan(intA);
    }
    endZeit = micros();
    Serial.print("   int: ");
    Serial.println(endZeit - startZeit);
}

void TimeTesting::loop(int iterations) {
    startZeit = micros();
    for (int i = 0; i < iterations; i++) {  
    }
    endZeit = micros();
    Serial.print("Schleifen Zeit (in Mikrosekunden):              ");
    Serial.println(endZeit - startZeit);
}
