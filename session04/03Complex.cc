int main() {
	const Complex c1; // (real=0, imag =0)
	const Complex c2(1.5);// real=1.5, imag = 0.0
	Complex c3(1.5,2.25); // real = 1.5, imag=2.25

  c1.print(); // 0+0i
	c3.print(); // 1.5+2.25i
	Complex c4 = c1.add(c2); // (real=1.5, imag=0.0)
	c4.print();
}
