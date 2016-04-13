
#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int n, int d) : num(n), den(d) {}
	friend Fraction operator +(const Fraction& a, const Fraction& b) {
    return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
	}
	friend Fraction operator -(const Fraction& a, const Fraction& b) {
    return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);    
	}

	friend ostream& operator <<(ostream& s, const Fraction& f) {
		return s << f.num << "/" << f.den;
	}
};
	
