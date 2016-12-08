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
	// x is invisible
	// y is protected
	// f is public
};

class C : private A {
	// x is invisible
	// y is private
	// f is private
};

class D : protected A {
	// x is invisible
	// y is protected
	// f is protected
};
