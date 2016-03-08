#include "Modem.hh"
#include <iostream>

int main() {
	Modem m("/dev/ttyS4", B115200);

	char buf[256];
	while (true) {
		int bytesRead =	m.read(buf, 256);
		for (int i = 0; i < bytesRead; i++)
			cout << (int)buf[i] << ' ';
		cout << '\n';
	}		
}
