#include <iostream>
using namespace std;

class Fraction {
private:
	int num, den;
public:
	Fraction(int num = 0, int den = 1) : num(num), den(den) {
		//this.num = num;
	}
	friend Fraction add(Fraction a, Fraction b);
	void print() const {
		cout << num << "/" << den;
	}
	friend Fraction operator +(Fraction a, Fraction b) {
		return Fraction(a.num*b.den + b.num*a.den,a.den*b.den);
	}

	friend Fraction operator -(Fraction a) {
		return Fraction(-a.num, a.den);
	}

	// x = 1 + 2 + 3 + 4;
	//cout << "hello" << f1 << "hello";
	friend ostream& operator <<(ostream& s, Fraction f) {
  return s << f.num << "/" << f.den;
	}
};

Fraction add(Fraction a, Fraction b) {
	return Fraction(a.num*b.den + b.num*a.den,a.den*b.den);
}



int main() {
	Fraction a(1,2);
	Fraction b(3); // 3/1
	Fraction c();
	Fraction d; // 0/1
	const Fraction e = add(a,b);
	const Fraction f = a + b;
	e.print();
	f.print();
	const Fraction g = -a;
	cout << g << "hello";
	//Fraction h = ++a;
	//Fraction j = a++;

	int x = 1;
	int y = 2;
	int z = x < y ? x : y;
}

	
	
