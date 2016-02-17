#include <iostream>
#include <string>

// fill in s with the  letters of the decimal value of v
// ex. if v = 345   '3' '4'  '5'
// return the length of the number in characters
// ex. -9876 returns 5
/// biggest +/- 2100000000
int toString(char s[], int v) {
	//  s[i] = '-'

	// v % 10 --> right most digit
	// v /= 10 --> chop off rightmost digit

}

int main() {
	char a[] = "testing"; // a[7] = '\0' NUL character
	a[7] = 'x'; // memory bug! (don't do this)

	char buf[256];
	for (int i = 1; i < 1000000000; i = i * 10 + 3) {
		// '1' '\0'
		// "13\0"
		// "133\0"
		int len = toString(buf, i);
		cout << i << "\t" << buf << " length=" << len << '\n';
	}		
}		
