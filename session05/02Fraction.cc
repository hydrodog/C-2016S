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

	//	operator +
};

Fraction add(Fraction a, Fraction b) {
	// a.num  a.den  b.num  b.den
	Fraction ans(a.num*b.den + b.num*a.den,a.den*b.den);
	return ans;
}



int main() {
	Fraction a(1,2);
	Fraction b(3); // 3/1
	Fraction c();
	Fraction d; // 0/1
	d = add(a,b);
#if 0
	d = a + b;
	d.print();
	cout << 2 << 2.5 << "hello";
	cout << a;
#endif
}
	


	
	
