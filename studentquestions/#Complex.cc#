class Complex {
private:
	double r,i;
public:
	Complex(double r, double i) : r(r), i(i) {}
	
  Complex add(const Complex& b) {
		return Complex(r+b.r, this->i+b.i  );
	}
	friend Complex operator +(const Complex& left, const Complex& right);
};

Complex operator +(const Complex& left, const Complex& right) {
  return Complex(left.r+right.r, left.i+right.i);
}

int main() {
	Complex a(1,2);
	Complex b(2,3);
	Complex c = a.add(b);
	Complex c = a + b;
}
