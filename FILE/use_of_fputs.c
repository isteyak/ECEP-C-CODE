#include <stdio.h>


int main()
{
    FILE *fptr;
    char str[20];

    fptr = fopen("test.txt", "W");

    printf("ENter the text \n");
    printf("to stop entering , press CTRL+d i unix and CTRL+z in DOS\n");

    while(gets(str) != NULL)
	fputs(str, fptr);

	fclose(fptr);
}
