

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    pid_t pid;

    int mypipefd[2];

    int ret;
    char buf[20];

    ret = pipe(mypipefd);
    
    if(ret == -1)
    {
	perror("pipe");
	exit(1);
    }

    pid = fork();

    if(pid == 0)
    {
	/*child processs */

	printf("cild process\n");

	write(mypipefd[1], "hello there!", 12);

    }
    else
    {
	/* parent process*/

	printf("parent proceess\n");
	read(mypipefd[0], buf, 15);

	printf("buf is = %s\n", buf);
    }
}
