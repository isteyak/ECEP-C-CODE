/*
program			:program to concatenate 2 file
Author			:Isteyak
Organisation		:Emertxe
Algoritham		:
			1.pass the file1 file2 and file3 through command line argument
			2.open the file1 and file 2 in read mode and file3 in write mode
			3.do error checking
			4.copy the file 1 and file2 content in file3
			5. close all file
*/

//inclusion of standard library
#include <stdio.h>
#include <string.h>



int main(int argc, char *argv[])
{
    //declaration of variable
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    char str[100];
    char ch;
    *argv++;
    //    printf("%s\n", *argv);

    if(argc == 1)//if argc is 1 then take string from user and print is on standard output
    {
	printf("Enter the string : ");
	scanf("%[^\n]%*c", str);
	printf("%s\n", str);
    }
    
    //if argc is 3 then take file1 and file2 content and print it on standard output

    else if(argc == 3)
    {
	fp1 = fopen(*argv, "r+");//opening file1 in read mode

	if(fp1 == NULL)//error checking wether file1 is open or not
	{
	    printf("file could not open\n");
	}
	else
	    while((ch = getc(fp1)) != EOF)//if file1 is open then take content of file and print on standard output
	    {
		putchar(ch);
	    }

	*argv++;
	fp2 = fopen(*argv, "r+");//opening file2 in read mode

	if(fp2 == NULL)//error checking whether file2 is open or not
	{
	    printf("file could not open\n");
	    }
	else
	    while((ch = getc(fp2)) != EOF)//if file1 is open then take content of file and print on standard output
	    {
		putchar(ch);
	    }
	fclose(fp1);
	fclose(fp2);
    }
    //if argc is 4 then take file1 and file2 content and write it in file3
    else if(argc == 4)
    {
	fp1 = fopen(*argv, "r+");//opening file1 in read mode
	*argv++;
	fp2 = fopen(*argv, "r+");//opening file2 in read mode
	*argv++;

	fp3 = fopen(*argv, "w+");//opening file3 in write mode
	if(fp1 == NULL)//error checking whether file1 is open succesfully or not
	{
	    printf("file could not open\n");
	}
	if(fp2 == NULL)//error checking whether file1 is open succesfully or not
	{
	    printf("file could not open\n");
	}
	if(fp3 == NULL)//error checking whether file1 is open succesfully or not
	{
	    printf("file could not open\n");
	}
        //if all file is open successfullt then take file1 and file2 content and write it in file3
	while((ch = getc(fp1)) != EOF)//logic to write file1 content in file3
	{
	    putc(ch, fp3);
	}
	while((ch = getc(fp2)) != EOF)//logic to write file2 content in file3
	{
	    putc(ch, fp3);
	}

        //closing of all open file
	fclose(fp1);
	fclose(fp3);
	fclose(fp2);
    
    }
    else
	printf("INVALID OPTION\n");


//    printf("%s     %s\n", *argv, *++argv);

}
