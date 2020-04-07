#include <stdio.h>


int main()
{
    FILE *fptr;

    char ch;

    fptr = fopen("/etc/shells", "r");


    while(ch = fgetc(fptr))
    {
	if(feof(fptr))
	    break;
	    fputc(ch, stdout);
    }

    fclose(fptr);

    return 0;
}
