#include <iostream>
using namespace std;

double f(double x) {
	double y = x*x; // pow(x, 2);
	x = 19;
	return y;
}

void g(double& x) {
  x *= x; //x = x * x;  
}

double sum(const int a[], int n) {
	int y[100000];
	y[0] = 19;
  double s;
	for (int i = 0; i < n; i++)
    s += a[i];
	return s;
}

void print(const int a[], int n) {
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << '\n';
}

// 1 1 2 3 5 8 13 ...
double fibo(int n) {
	if (n <= 2)
		return 1;
	return fibo(n-2) + fibo(n-1);
}



int main() {
	cout << f(3) << '\n';
	cout << fibo(20);
	double a = 3;
	g(a);
	cout << a << '\n';
	const int x[] = { 5, 4, 3, 2};
	const int n = sizeof(x)/sizeof(x[0]);
	print(x, n);
	cout << sum(x, n) << '\n' ;
}
