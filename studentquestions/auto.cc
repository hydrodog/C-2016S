#include <iostream>
using namespace std;

int main (){
	auto x=5; //giving the int on the right hand side allows for auto to infer the type

	double y = {5, 4, 3, 2, 1}; //fixes array size at 5

	for (auto z : y) {
		cout << z;
	}

	for (auto &z : y) { //now z refers to each element of y
		z = 2*z;
	}

	vector <int> a; //use pushback to add to a vector

	for (int i=0; i < 10; i++)
		a.push_back(i);


	for (vector <int>::iterator i = a.begin(); i < a.end(); ++i) // note ++i not i++
		//i behaves like a ptr to each element
		cout << *i;


	for (vector <int>::iterator i = a.begin(); i < a.end(); ++i) // note ++i not i++
		//i behaves like a ptr to each element
		*i=3;

	for (vector <int>::const_iterator i = a.begin(); i < a.end(); ++i) // note ++i not i++
		//i behaves like a ptr to each element
		cout << *i;

	for (const auto &r : a) { //all i can do here is look at a, but not change it
		cout << *r;
	}
}