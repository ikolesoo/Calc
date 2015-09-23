#include <cstdio>
#include "Calc.h"
#include <iostream>
#include <string>



Calc::Calc()
{
	std::cout << "Calc created\n";
}

void Calc::Add(int a, int b)
{
	result = a + b;
}

void Calc::Sub(int a, int b)
{
	result = a - b;
}

void Calc::div(int a, int b)
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
	
}

void Calc::Mult(int a, int b)
{
	result = a*b;
}

void Calc::print() const
{
	if (error != "error")
		std::cout << "The resuld is " << result << "\n";
	else (std::cout << "There was an error");

}
void Calc::err()
{
	error = "error";
}
Calc::~Calc()
{
	std::cout << "Bye";
}
int main()
{	
	int a, b;
	std::string action;
	Calc myCalc;
	std::cout << "Print first value ";
	std::cin >> a;
	std::cout << "Print second value ";
	std::cin >> b;
	std::cout << "Give me an action!\n Divide\n Add\n Sub\n Mult\n ";
	std::getline(std::cin, action); 
	std::getline(std::cin, action);

	if (action == "Divide")
		myCalc.div(a, b);
	else if (action == "Mult")
		myCalc.Mult(a, b);
	else if (action == "Add")
		myCalc.Add(a, b);
	else if (action == "Sub")
		myCalc.Sub(a, b);
	else (myCalc.err());
	myCalc.print();
	system("pause");

}