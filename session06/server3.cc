#include <iostream>
#include <cstdint>
#include <cstdio>
#include "Exception.hh"
//#include <sys/socket.h>

#include <sys/types.h>
#include <netinet/ip.h>
#include <netdb.h>
#include <arpa/inet.h>

#include <errno.h>
#include <string.h>
#include <unistd.h>

using namespace std;

int listenSock; // socket for listening to other side (same for client and server)

// listen on server and return the client socket
int initServer(int port) throw (Exception) {
	struct sockaddr_in addr;
	bzero(&addr, sizeof addr);
	
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = htonl(INADDR_ANY);
	addr.sin_port = htons(port);

	if ((listenSock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
		throw Exception(__LINE__, "socket");
	}

	if (bind(listenSock, (struct sockaddr *)&addr, sizeof(addr)) < 0) {
		throw Exception(__LINE__, "bind failed");
	}
}

int main () {
	const int BUF_SIZE = 8192;
	char buf[BUF_SIZE+1];
	buf[BUF_SIZE] = '\0'; // make sure buffer is always zero terminated
	struct sockaddr clientAddr;
	socklen_t len = sizeof(clientAddr);
	const int port = 5000;
	try {
		initServer(port);
		while (true) {
			try {
				cout << "waiting on port " << port << '\n';
				int bytesRead = recvfrom(listenSock, buf, BUF_SIZE, 0, (struct sockaddr *)&clientAddr, &len);
				cout << "received " << bytesRead << " message: " << buf << '\n';
				sendto(listenSock, buf, strlen(buf), 0, &clientAddr, len);
			} catch(const Exception& e) {
				cout << e;
			}
		}
	} catch(Exception& e) {
		cout << e;
	}
}
