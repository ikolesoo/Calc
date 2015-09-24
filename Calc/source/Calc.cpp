#include <iostream>
#include <string>
#include "Calc.h"

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

int main()
{
    float a, b;
    std::string action;
    Calc myCalc;
    std::cout << "Print first value ";
    std::cin >> a;
    std::cout << "Print second value ";
    std::cin >> b;
    std::cout << "Give me an action!\n Divide\n Add\n Sub\n Mult\n ";
    std::cin >> action;

    if (action == "Divide")
        myCalc.Div(a, b);
    else if (action == "Mult")
        myCalc.Mult(a, b);
    else if (action == "Add")
        myCalc.Add(a, b);
    else if (action == "Sub")
        myCalc.Sub(a, b);
    else (myCalc.Err());
    myCalc.Print();
    system("pause");
}