#include <iostream>
using namespace std;

void f (int &a) {
	a=4;
}

void g (int *a) {
	*a=5; //changes the value at a
}

int main(){
	int a=5;
	int &r = a; //a ref is a const pointer that can't point at anything else and can't be null

	cout << r << endl; //this gives a
	cout << sizeof(r) << endl; //sizeof a
	//references are safer because they're abstracted
	//you can only tell it's a ptr in the debugger


	f(a);
	cout << "function f= " << a << endl;
	
	//int * p = &a;
	g(&a);//old-fashioned passing by ref
	cout << "function g= " << a << endl;
}
