#include <iostream>
#include <cstdint>
#include <cstdio>
#include "Exception.hh"
#include <sys/socket.h>

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
int initServer(const char hostname[], int port, int queueSize) throw (Exception) {
	struct addrinfo hints, *servinfo, *p;
	memset(&hints, 0, sizeof hints);
	hints.ai_family = AF_UNSPEC;  // Make connection IP version agnostic
	hints.ai_socktype = SOCK_STREAM; // Will use Stream sockets and therefore, TCP
	hints.ai_flags = AI_PASSIVE; // use my IP
	int rv;
	char portStr[12];
	sprintf(portStr, "%d", port);
	if ((rv = getaddrinfo(NULL, portStr, &hints, &servinfo)) != 0) {
		throw Exception(__LINE__, "getaddrinfo");
	}

	// loop through all the results and bind to the first we can
	for (p = servinfo; p != NULL; p = p->ai_next) {
		if ((listenSock = socket(p->ai_family, p->ai_socktype, p->ai_protocol))
				< 0) {
			cerr << "server: socket";
			continue;
		}
		int yes = 1;
		if (setsockopt(listenSock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int))
				< 0) {
			throw Exception(__LINE__, "setsockopt");
		}

		if (::bind(listenSock, p->ai_addr, p->ai_addrlen) == -1) {
			close(listenSock);
			cerr << "server: bind";
			continue;
		}
		break;
	}

	if (p == NULL) {
		throw Exception(__LINE__, "Server failed to bind");
	}

	freeaddrinfo(servinfo); // all done with this structure

	if (listen(listenSock, queueSize) < 0) {
		throw Exception(__LINE__, "listen");
	}
}

inline int readOther(char buf[], const int SIZE) {
	// wait to receive message from sender 
	sockaddr clientName;
	socklen_t clientNameLen = sizeof(struct sockaddr);
	int otherPartySock = accept(listenSock, &clientName, &clientNameLen);
	int bytesRead = recv(listenSock, buf, SIZE, 0);
	return bytesRead;
}


int main () {
	const int BUF_SIZE = 8192;
	char buf[BUF_SIZE+1];
	buf[BUF_SIZE] = '\0'; // make sure buffer is always zero terminated
	try {
		initServer("localhost", 5000, 10);
		while (true) {
			try {
				int bytesRead = readOther(buf, BUF_SIZE);
				if (bytesRead < BUF_SIZE)
					buf[bytesRead] = '\0';
				cout << "Received: " << bytesRead << " buf=" << buf << '\n';
			}catch(const Exception& e) {
				cout << e;
			}
		}
	} catch(Exception& e) {
		cout << e;
	}
}
