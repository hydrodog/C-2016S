#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n = 0, int d = 1) : num(n), den(d) {
		if (den == 0)
			throw "tantrum";
	}
	Fraction neg() const { // I AM A READONLY METHOD
		return Fraction(-num, den);
	}

	// the object on the "left" is called this
	Fraction mult(Fraction right) const {
		//		this->num, this->den right.num right.den
		return Fraction(this->num * right.num,
										this->den * right.den);
	}

	void print() const {
		cout << num << "/" << den;
	}
};


int main() {
	const	Fraction a(1,2);
	a.print();
	Fraction b(1,3);
	b.print();
	Fraction c(3); // 3/1
	c.print();
	
	Fraction d; // call the constructor with no parameters
	d.print();
	Fraction e(); // e is a function that returns Fractions
	//	e.print();
	d = a.neg(); // 1/2 --> -1/2
	d.print();
	d = a.mult(b); // 1/2 * 1/3 = 1/6
	d.print();
}
