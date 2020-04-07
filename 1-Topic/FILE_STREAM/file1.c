#include <stdio.h>



int main()
{
    FILE *fp;

    fp = fopen("test.txt", "r");

    if(fp == NULL)
    {
	printf("file could not open\n");
	return 1;

    }
    else


    fclose(fp);

    return 0;
}
