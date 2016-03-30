class Complex {
private:
	double r,i;
public:
	Complex(double r, double i) : r(r), i(i) {}
	
  Complex add(const Complex& b) {
		return Complex(r+b.r, this->i+b.i  );
	}
};


int main() {
	Complex a(1,2);
	Complex b(2,3);
	Complex c = a.add(b);
