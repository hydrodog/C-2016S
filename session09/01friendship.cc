class A {
public:
	void f();
	A add(A b);
	A operator +(A b);
};

A operator +(A a1, A a2) {

}

int main() {
	A a1;
	a1.f();
	A a2;

	A a3 = a1.add(a2);
	A a4 = a1.operator+(a2);
	A a5 = a1 + a2;
}
