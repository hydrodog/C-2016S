template<typename Precision>
class Complex {
private:
	Precision r, i;
public:
	Complex(Precision r, Precision i) : r(r), i(i) {}
	f(Complex c) {

	}
	friend Complex<Precision> operator +
	(const Complex<Precision>& a, const Complex<Precision>& b) {
		return Complex(a.r + b.r, a.i + b.i);
	}

	template<typename T2>
	friend Complex<Precision> operator +
	(const Complex<Precision>& a, const Complex<T2>& b) {
		return Complex(a.r + b.r, a.i + b.i);
	}

};


int main() {
	Complex<double> a(1.5,2);
	Complex<float> b(1.5, 2);
	Complex<long double> c(1.5,2);
	Complex<int> d(1,2);
  
}
