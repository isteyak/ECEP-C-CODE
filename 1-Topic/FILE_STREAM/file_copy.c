#include <stdio.h>



int main()
{
    FILE *fp;

    char ch;

    fp = fopen("test.txt", "w");

    if(fp == NULL)
    {
	printf("file could not open\n");
	return 1;

    }
    else


    while((ch = getc(stdin)) != EOF)
    {
	putc(ch, fp);
    }

    fclose(fp);
    FILE *fp1 = fopen("test.txt", "r");
    FILE *fp2 = fopen("test_copy.txt", "w");


    while((ch = getc(fp1)) != EOF)
    {
	putc(ch, fp2);
    }

    puts("EOF received");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
