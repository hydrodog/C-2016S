#include <iostream>
using namespace std;

//operator overloading

class Fraction {

int num, den;

public:
	Fraction () : num(0), den(1) {}
	Fraction (int n) : num(n), den(1) {}
	Fraction (int n, int d) : num(n), den(d) {}

	//by default = will work because of a bitwise copy, so that is okay for this case
	// friend Fraction add (Fraction a, Fraction b); //functions defined outside the class are friends
	//you're saying there's a function but you don't define it yet, because it can only be defined once
	friend Fraction add (Fraction a, Fraction b) { // don't need to pass by reference; threshold is 3 doubles
		return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
	} //if i don't put friend, the first argument is "this"
	friend Fraction operator + (Fraction a, Fraction b) {
		return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
	}

	//if the left hand side is not in your class, the function is a friend
	friend ostream& << (ostream& s, Fraction f) { 
	//don't copy ostream!!! make sure your return type is by reference 
	//and also your input parameter too
		return s << f.num << "/" << f.den;
	}

	int getNumerator() const {
		return num;
	}

	void setNumerator (int n) {
		num=n;
	}

};

class list {
int* p;
int len;
public:
	list() : len(0), p(nullptr) {}

	void add(int n) {
		int* chunk;
		chunk = new int[len + 1];

		// for (int i=0; i < len; i++)	{
		// 	chunk[i] = p[i];//chunk and p are both pointers
		// }

		for (int i=0; i < len; i++)	{
			*(chunk+i) = *(p+i);//chunk and p are both pointers
		}

		chunk[len] = n;
		len++;
		delete [] p;
		p = chunk;
	}

	~ list () {
		delete [] p;
	}

	list (const list& orig) { //list a=b orig = a
		//copy constructor = const and ref
		len = orig.len;
		p = new int [orig.len];
		for (int i=0; i < orig.len; i++) {
			p[i] = orig.p[i];
		}
	}	

	//constructor, destructor, copy constructor, operator =

	list& operator = (const list& orig) {
		if (this != &orig) {

			delete [] p;
			len = orig.len;
			p = new int [orig.len];
			for (int i=0; i < orig.len; i++) {
				p[i] = orig.p[i];
			}
		}
		return orig;
	}
};


// Fraction add (Fraction a, Fraction b) {
// 	int num = a.num * b.den + b.num * a.den;
// 	int den = a.den * b.den;
// 	Fraction result;
// 	result.num = num;
// 	result.den = den;
// 	return result;
// }

int main (){

}