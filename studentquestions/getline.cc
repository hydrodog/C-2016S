#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string line;
	//"123 456x test"
	int a,b;
	cin  >> a >> b;
	while (!cin.eof()) {
		cin.getline(line);
		istringstream s(line);
		string firstWord;
		s >> firstWord;
		cout << firstWord;
	}
}
