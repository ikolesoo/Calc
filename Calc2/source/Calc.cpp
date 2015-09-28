#include <iostream>
#include "Calc.h"

Calc::Calc()
{
    std::cout << "Calc created\n";
}

Calc::~Calc()
{
    std::cout << "Bye";
}

float Calc::Add(float a, float b)
{
    result = a + b;
    return result;
}

float Calc::Sub(float a, float b)
{
    result = a - b;
    return result;
}

float Calc::Div(float a, float b)
{
    if (b == 0)
    {
        std::cout << "Zero div!\n";
        error = "error";
    }
    else
    {
        result = a / b;
    }
    return result;
}

float Calc::Mult(float a, float b)
{
    result = a * b;
    return result;
}

const void Calc::Print()
{
    if (error != "error")
        std::cout << "The resuld is " << result << "\n";
    else (std::cout << "There was an error");

}
void Calc::Err()
{
    error = "error";
}

