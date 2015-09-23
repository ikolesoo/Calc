#include <iostream>
class Calc {
	int result;
	std::string error;
	public:
		Calc();
		void Add(int a, int b);
		void Sub(int a, int b);
		void Mult(int a, int b);
		void div(int a, int b);
		void err();
		virtual void print() const;
		virtual ~Calc();
		
};
