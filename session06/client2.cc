#include <iostream>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include "Exception.hh"

#include <sys/types.h>
#include <netinet/ip.h>
#include <netdb.h>
#include <arpa/inet.h>

#include <errno.h>
#include <string.h>
#include <unistd.h>

using namespace std;

int sendSock; // socket for listening to other side (same for client and server)
struct sockaddr_in addr;
struct addrinfo* res = nullptr;

// listen on server and return the client socket
int initClient(const char hostname[], const char port[]) throw (Exception) {
	struct addrinfo hints;
	memset(&hints,0,sizeof(hints));
	hints.ai_family=AF_INET; //AF_UNSPEC;
	hints.ai_socktype=SOCK_STREAM;
	hints.ai_protocol=0; // Should this be 4??
	hints.ai_flags=AI_ADDRCONFIG;
	int err = getaddrinfo(hostname, port, &hints, &res);
	if (err != 0) {
    throw Exception(__LINE__, "failed to resolve remote socket address"); //TODO: add err
	}
	sendSock = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
	if (sendSock < 0) { 
    throw Exception(__LINE__, strerror(errno));
	}
}

int main (int argc, char* argv[]) {
	if (argc < 3) {
		cerr << "Usage: client hostname port\n";
		exit(-1);
	}
			
	const char* hostname = argv[1];
	const char* port = argv[2];
	
	const int BUF_SIZE = 8192;
	char buf[BUF_SIZE+1];
	buf[BUF_SIZE] = '\0'; // make sure buffer is always zero terminated
	try {
		initClient(hostname, port);
		strcpy(buf, "01010101010101010101010101010101");
		int end = strlen(buf);
		socklen_t len = sizeof(addr); //sizeof(struct addrinfo);
		while (true) {
			try {
				int err = connect(sendSock, (struct sockaddr*)res->ai_addr, res->ai_addrlen);
				if (err < 0) {
					throw Exception(__LINE__, strerror(errno));
				}
				int bytesSent = send(sendSock, buf, BUF_SIZE, 0); //TODO: flags? What's the ack situation?
				if (bytesSent != BUF_SIZE)
					throw Exception(__LINE__, strerror(errno));
				char* digit = buf + 31;
				do {
					if(*digit >= '9') {
						(*digit) = '0';
						--digit;
					}	else {
						++*digit;
						break;
					}
				} while (digit >= buf);
				usleep(500000);
			} catch(const Exception& e) {
				cout << e;
			}
		}
	} catch(Exception& e) {
		cout << e;
	}
}
