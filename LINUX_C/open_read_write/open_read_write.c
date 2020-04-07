

#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int fd;

    fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
char buf[14];
    if(fd == -1)
    {
	printf("FAILED   |N");

	exit(1);
    }

write(fd, "hello worls\n", 12);



    close(fd);
    fd = open("myfile.txt", O_CREAT | O_RDONLY);

    if(fd == -1)
    {
	printf("FAILED   |N");

	exit(1);
}
read(fd, buf, 11);
buf[12] = '\0';
close(fd);

printf("%s  is buf", buf);
}
