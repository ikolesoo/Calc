#include <cstdio>
#include "Calc.h"
#include <iostream>
#include <string>



//
//Calc::Calc()
//{
//	std::cout << "Calc created\n";
//}
//
//float Calc::Add(float a, float b)
//{
//	result = a + b;
//	return result;
//}
//
//float Calc::Sub(float a, float b)
//{
//	result = a - b;
//	return result;
//}
//
//float Calc::div(float a, float b)
//{
//	if (b == 0)
//	{
//		std::cout << "Zero div!\n";
//		error = "error";
//	}
//	else
//	{
//		result = a / b;
//	}
//	return result;
//}
//
//float Calc::Mult(float a, float b)
//{
//	result = a*b;
//	return result;
//}
//
//void Calc::print() const
//{
//	if (error != "error")
//		std::cout << "The resuld is " << result << "\n";
//	else (std::cout << "There was an error");
//
//}
//void Calc::err()
//{
//	error = "error";
//}
//Calc::~Calc()
//{
//	std::cout << "Bye";
//}
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