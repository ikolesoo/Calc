#include <iostream>
class Calc {
	float result;
	std::string error;
	public:
		Calc();
		float Add(float a, float b);
		float Sub(float a, float b);
		float Mult(float a, float b);
		float div(float a, float b);
		void err();
		virtual void print() const;
		virtual ~Calc();
		
};

Calc::Calc()
{
	std::cout << "Calc created\n";
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

float Calc::div(float a, float b)
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
	result = a*b;
	return result;
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