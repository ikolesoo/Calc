#include <iostream>
class Calc {
	public:
		Calc();
		void Add(int a, int b);
		void Sub(int a, int b);
		void Mult(int a, int b);
		void div(int a, int b);
		virtual void print() const;
		virtual ~Calc();
		
};
Calc::Calc()
{
	std::cout << "Calc created\n";
}
