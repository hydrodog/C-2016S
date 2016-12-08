#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>
using namespace std;

class account {
public:
	int money;
	mutex m;

	account (){ 
		money = 0;
	}

	void deposit (int amount) {
		m.lock();
		money += amount;
		m.unlock();
	}

	//race condition example: two people read a bank acct balance at the same time and the second person overrites first person's deposit
};

void f () {
	while (1){
		cout << "hello" << endl;
		sleep(1);
	}
}

void g () {
	while (1) {
		cout << "goodbye" << endl;
		sleep(2);
	}
}

account a;
void h() {
	for (int i =0; i < 1000000; i++) {
		a.deposit(1);
	}
}


int main() {
	// h();
	thread t1(h);
	thread t2(h);
	t1.join();
	t2.join(); //this gave me a different amount of money every time!!!!!!!! (race conditions are time sensitive)

	cout << a.money;

	// thread t1(f);
	// thread t2(g);
	// t1.join();
	// t2.join();
}