#include <sys/socket.h>
#include <netinet/in.h>
#include <stdlib.h>
int main() {
    int  socketfd = socket(AF_UNIX,SOCK_STREAM,0);
    struct sockaddr_in6 *sockaddrIn6;
    void * socket = malloc(sizeof(struct sockaddr_in6));
    if (socket != NULL){
        sockaddrIn6 = (struct *sockaddr_in6)socket;
    }
    sockaddr.sa_family = AF_INET6;
    bind(socketfd,&sockaddr, (socklen_t)sizeof(sockaddr));
    return 0;
}