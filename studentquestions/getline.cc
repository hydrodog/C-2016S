#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string line;
	
	while (!cin.eof()) {
		cin.getline(line);
		istringstream s(line);
		string firstWord;
		s >> firstWord;
		cout << firstWord;
	}
}
