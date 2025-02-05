#ifndef TIMETESTING_H
#define TIMETESTING_H

/**
class TimeTesting {
private:
    float numA;
    float numB;
    int iterations;
    unsigned long startZeit;
    unsigned long endZeit;
    unsigned long dauer;

public:
    TimeTesting(float numA, float numB, int iterations);

    void addition(int iterations);
    void subtraction(int iterations);
    void multiply(int iterations);
    void division(int iterations);

    void sinus(int iterations);
    void cosinus(int iterations);
    void tangens(int iterations);

    void loop(int iterations);
};
*/


class TimeTesting {
private:
    float floatA;
    float floatB;
    int intA;
    int intB;
    int iterations;
    unsigned long startZeit;
    unsigned long endZeit;
    unsigned long dauer;

public:
    TimeTesting(float floatA, float floatB, int intA, int intB, int iterations);

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