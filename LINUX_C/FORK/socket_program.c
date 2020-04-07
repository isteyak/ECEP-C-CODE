
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
//#include <lunistd.h>



int main(int argc, char *argv[])
{
/* variable    */

int sock;

struct sockaddr_in server;
int mysock;

char buf[1024];
int rval;





/*  create socket   */
sock = socket(AF_INET, SOCK_STREAM, 0);

if(sock < 0)
{
    perror("FAILED TO CREATE SOCKET\n");
    exit(1);
}

server.sin_family = AF_INET;

server.sin_addr.s_addr = INADDR_ANY;
server.sin_port = 5000;


/* call bind */
if(bind(sock, (struct sockaddr *)&server, sizeof(server)));
{
perror("bind failed");
exit(1);
}

/* listen */
listen(sock, 5);


/*  acccept */
do
{

mysock = accept(sock, (struct sockaddr *)0, 0);

if(mysock == -1)
{
    perror("accept failed");
}
else
{
    memset(buf, 0, sizeof(buf));

    if((rval = recv(mysock, buf, sizeof(buf), 0)) < 0)
    {
	perror("reading  failed message error"); 
    }
    else if(rval == 0)
    {
	printf("Ending connection\n");
    }
    else
    {
	printf("MSG : %s\n", buf);


printf("Got the message(rval = %d)\n", rval);

close(mysock);
}


}

}while(1);

return 0;
}
