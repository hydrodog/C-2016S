class Fraction {
private:
	int num, den;
public:
	//	Fraction(int n = 0, int d = 1) : num(n), den(d) {}
	Fraction(int n, int d) : num(n), den(d) {}
	Fraction(int n) : num(n), den(1) {}
	Fraction() : num(0), den(1) {}

	Fraction operator +(Fraction r){
		return Fraction(this->num * r.den + r.num * this->den, this->den * r.den);
	}

};


int main() {
	Fraction f(1,2);
	Fraction f2 = 1;

	f2 = 3;
	Fraction f3 = f1 + f2;
	Fraction f4 = f1 + 1;
	//	Fraction f5 = 1 + f1; // Doesnt work!


}
