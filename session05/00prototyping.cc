int f();
//int f(void);
void f(int x);
void f(double x);
void f(double x, double y);
void f(int x, int y);
void f(int a, int b = 2); // illegal because this is equivalent to f(int)
int main() {
	f(2);
	f(2.5);
	f(int(2.9998f));
	float fff = 2.5;
	f(fff); //ambiguous! cast one way or the other
	f(1,2);
	f(1, 2.5);
}

void g() {
	5;
	5+7;
	const int secondsPerYear = 365*24*60*60;
	int a[5+7];
	int x = 2;
	int y = 3;
	x + y;
	f();
}

int f() { return 13; }
