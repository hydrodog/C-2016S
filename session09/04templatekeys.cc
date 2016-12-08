#include <iostream>
using namespace std;
class Elephant {
public:
	string name;
	int age;
public:
	Elephant(const string& name, int age) : name(name), age(age) {}
	friend ostream& operator <<(ostream& s, const Elephant& e) {
		return s << "Elephant " << e.name << " age=" << e.age;
	}
};


template<typename T, typename Key>
void bubbleSort(T x[], Key T::*p, int n) {
	for (int j = 0; j < n-1; j++) {
		for (int i = 0; i < n-1; i++)
			if (x[i].*p > x[i+1].*p) {
				swap(x[i], x[i+1]);
			}
	}
}


int main() {
	Elephant e[] = {
		Elephant("Lee Ping", 22),
		Elephant("Dov", 44),
		Elephant("Yu-Dong", 48)
	};
	const int n = 3;
	bubbleSort(e, &Elephant::name, n);
	for (int i = 0; i < n ; i++)
		cout << e[i] << ' ';
	cout << '\n';


	bubbleSort(e, &Elephant::age, 3);
	for (int i = 0; i < n ; i++)
		cout << e[i] << ' ';
	cout << '\n';

}

