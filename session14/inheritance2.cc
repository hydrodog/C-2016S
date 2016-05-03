class A {
private:
  int x;
protected:
  int y;
public:
  void f() {
		x = 3;
	}
};

class B : public A {
public:
	void f() {
		A::f();
	}
};
