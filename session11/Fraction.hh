#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
	static int count;
public:
	Fraction(int n, int d);
	Fraction(int n);
	friend Fraction operator +(const Fraction& a, const Fraction& b);
	friend Fraction operator -(const Fraction& a, const Fraction& b);
  void f() const;
	friend ostream& operator <<(ostream& s, const Fraction& f);
};
