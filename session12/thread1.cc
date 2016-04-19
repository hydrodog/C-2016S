#include <thread>
#include <iostream>
#include <unistd.h>
using namespace std;

void f() {
	while (true) {
		cout << "hello" <<flush;
		sleep(1);
	}
}

void g() {
	for (;;) {
		cout << "bye" << endl;
		sleep(2);
	}
}

int main() {
	thread t1(f);
	thread t2(g);
	t1.join();
}
