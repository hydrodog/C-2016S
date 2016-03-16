#include <iostream>
using namespace std;

void bzero(char* p, int size) {
	for (int i = 0; i < size; i++)
		*p++ = 0;
}

void bzero_v2(char* p, int size) {
	for (int i = 0; i < size; i++) {
		*p = 0;
		p++;
	}
}
void set(char* p, int len, char startVal) {
	for ( ; len > 0; len--) {
		*p++ = startVal++;
	}
}
	// buffer[0] = 1 p = &buffer[1] startVal = 2

void set_v2(char* p, int len, char startVal) {
	for ( ; len > 0; len--) {
		*p = startVal;
		p++;
		startVal++;
	}
}

void copy(char* dst, char* src, size_t len) {
	for (int i = 0; i < len; i++)
		*dst++ = *src++;
}

int main() {
	char buffer[128];

	bzero(buffer, 128);
	set(buffer, 128, 1);
	char buffer2[128];
	copy(buffer2, buffer, 128); //equivalent to memcpy
}
