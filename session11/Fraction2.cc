#include "Fraction.hh"

namespace stevens {
	int x;  //stevens::x

};



int Fraction::count  = 0;

Fraction::Fraction(int n, int d) : num(n), den(d) {}

Fraction::Fraction(int n) : num(n), den(1) {}

Fraction operator +(const Fraction& a, const Fraction& b) {
	return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
}

Fraction operator -(const Fraction& a, const Fraction& b) {
	return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);    
}

ostream& operator <<(ostream& s, const Fraction& f) {
	return s << f.num << "/" << f.den;
}
