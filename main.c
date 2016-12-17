#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int  socketfd = socket(AF_UNIX,SOCK_STREAM,0);
    socketfd++;
    printf("%d",14);
//    struct sockaddr_in6 * socket = malloc(sizeof(struct sockaddr_in6));
//    socket->sin6_family
//    socket.sa_family = AF_INET6;
//    bind(socketfd,&sockaddr, (socklen_t)sizeof(sockaddr));
    return 0;
}