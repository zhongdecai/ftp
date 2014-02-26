#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <fcntl.h>

#define MAXLEN 1024
#define SERVERPORT 8010
#define MAXORDER 32



char* getusefulmsg(char * ordermsg);
int connect2client(int sockfd,struct sockaddr_in addr,char * clientaddr,char * port);
int listen2client(int sockfd ,struct sockaddr_in clientaddr, struct sockaddr_in serveraddr);


