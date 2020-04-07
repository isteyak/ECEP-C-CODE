#include <stdio.h>



int main()
{
    FILE *fptr;

    char ch;

    fptr = fopen("file.txt", "a");


    ch = fgetc(fptr);

    printf("%d**\n", *fptr);

    if(ferror(fptr))
	fprintf(stderr,"error i  reading file\n");

  clearerr(fptr);
    
    
    printf("%d**\n", *fptr);
    if(ferror(fptr))
	fprintf(stderr,"error i  reading file\n");

    printf("%d**\n", *fptr);
	fclose(fptr);

	return 0;
}
