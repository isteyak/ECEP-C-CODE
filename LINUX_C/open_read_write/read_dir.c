#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
int main(int argv, char *arhv[])
{

    DIR *dir;

    struct dirent *sd;

    dir = opendir(".");

    if(dir == NULL)
    {
	printf("ERROR enable to directory");
	exit(1);
    }

while( (sd = readdir(dir)) != NULL)
{
    printf(">> %s\n", sd->d_name);
}

closedir(dir);

    return 0;

}
