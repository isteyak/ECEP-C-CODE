// inter process communication this process is so use full in case of networking where two proccess communicate with each other



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int chipdpid; 

    int count = 1, count2 = 0;

    printf("Before it fork\n");

    chipdpid = fork();

    if(chipdpid == 0)
    {
	printf("This is a child pocess\n");

	while(count < 10)
	{

	    printf("child  process : %d\n", count);

	    sleep(1);
	    count++;
	}
    }
    else
    {
	printf("This is parent process\n");

	while(count2 < 20)
	{
	    printf("parent proces : %d\n", count2);

	    sleep(1);
	    count2++;
	}
}
}
