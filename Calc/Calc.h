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
