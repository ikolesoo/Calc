#include <iostream>
#include <string>
#include "Calc.h"
#include "stdafx.h"

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