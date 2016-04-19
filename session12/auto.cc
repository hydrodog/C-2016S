#include <iostream>
#include <vector>
using namespace std;

void f(const vector<double>& b) {
	for (vector<double>::const_iterator i = b.begin(); i != b.end(); ++i)
		cout << *i;
}

void g(const vector<double>& b) {
	for (auto x : b)
		cout << x;
}


int main() {
	auto x = 5;
	//	auto y;//not legal.  You must have a type to infer
	
	double a[] = {6, 2, 7, 8, 1};

	for (int i = 0; i < sizeof(a)/sizeof(double); i++)
		cout << a[i];

	for (auto x : a) {
		cout << x;
	}

	for (auto& x : a) {
		x *= 2;
	}
	
	vector<double> b;
	for (double i = 5.5; i < 10.5; i++)
		b.push_back(i);

	for (vector<double>::iterator i = b.begin(); i != b.end(); ++i)
		cout << *i;

	for (auto x : b) {
		cout << x;
	}

	f(b);
	g(b);

}
