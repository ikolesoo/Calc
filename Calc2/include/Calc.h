#ifndef CALC_H
#define CALC_H
#include <string>

class Calc {
public:
    Calc();
    float Add(float a, float b);
    float Sub(float a, float b);
    float Mult(float a, float b);
    float Div(float a, float b);
    void Err();
    virtual const void Print();
    virtual ~Calc();
private:
    float result;
    std::string error;
};

float Add(float a, float b);
float Sub(float a, float b);
float Div(float a, float b);
float Mult(float a, float b);
void Print();
void Err();

#endif