#include <thread>
#include <iostream>
using namespace std;

class Account {
private:
	double amt;
public:
	Account() : amt(0) {}
	void deposit(double d) { amt += d; }
	friend ostream& operator<<(ostream& s, const Account& a) {
		return s << a.amt;
	}
};

Account a;

void singleThreaded() {
	const int n = 1000000;
	for (int i = 0; i < n; i++)
		a.deposit(1);
}

void multithreaded() {
	thread t1(singleThreaded);
	thread t2(singleThreaded);
	t1.join();
	t2.join();
}

int main() {
	multithreaded();
	cout << a << '\n';
}
