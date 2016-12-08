int x; // globals are born before main, when the program is loaded
// x = 0 without initialization
// dies when the program dies

static int y = 3; // lifetime just like global
void f() {
	auto int x; // lifetime of an auto variable: born? enter the function
	cout << x;
	x = 2; // when does it die? when you leave
	::x++;
}

int main() {
	cout << "hello";
	f();
	f();
	f();
	cout << x; // should print 3

}
