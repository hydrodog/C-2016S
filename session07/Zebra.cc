#include <iostream>
#include <string>
using namespace std;

class Zebra {
private:
	string name;
	static int count; // class shared
public:
	Zebra(const string& name) : name(name) {  // constructor
		count++;
	}
	~Zebra() { // destructor
		count--;
	}
  int getCount() const { return count; }
  static int getStaticCount() { return count; }

};

int Zebra::count = 0;
void f() {
	Zebra c("Dov");
}

int main() {
	string s = "abc";
	Zebra a("fred");
	cout << a.getCount();
	cout << Zebra::getStaticCount();
	Zebra b("Jennifer");
	f();
}
