#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den; // numerator, denominator
public:
	//	Fraction() {} // default constructor (NOT A GOOD IDEA to leave uninitialized)
	
	Fraction(int n, int d) {
		if (d == 0)
			throw "Div by zero";
		num = n; den = d;
	}

	void print() const {
		cout << num << '/' << den;
	}
	void zerome() {
	}	
};

int main() {
	Fraction x(); // this is NOT an object.  It is a function that returns an object
#if 0

	// BAD IDEA
	Fraction y; // leaving objects uninitialized is a YUUUGE mistake
  Fraction z;
	cout << z;
#endif
	
	//	Fraction a(1,0); // we need to stop this...
	Fraction a(1,2);
	a.print();
	a.zerome();
	a.print();
	
	const Fraction b(2,3);
	b.print();
	b.zerome();
	//later!	Fraction c = a + b;
	
	//	Fraction c = a + b;
}
