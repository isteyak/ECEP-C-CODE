/*
program 		:program to to copy one file content into another
Author			:Isteyak ansari
Organisation 		:Emetxe
Algoritham		:
			1.make a my_cp funtion and pass the cla argument address in that
			  1.1. do error checking for cla argument
			2. inside that funtion open file1 in read mode AND file2 in write mode 
			3. do error checking of both file
			4. read the file1 content
			5. write file 1 content in file2
			6.
*/



//inclusion of standard library
#include <stdio.h>




int main(int agrc, char *argv[])
{
    //increment argv argument to point next argument other tha a.out
    *argv++;
    if(agrc == 3)//condition to check required number of argument
    {
	my_cp(argv);//calling of my_cp funtion
    }
    else
	printf("Enter the valid cla argument\n");//if given argument is not matching with required argument so print the invalid cla argument
}

//definition of my_cp funtion
int my_cp(char *argv[])
{
    //declaration of variable
    FILE *fp1;
    FILE *fp2;
    char ch;
    char ch1[60];

    //opening of file1
    fp1 = fopen(*argv, "r");

    if(fp1 == NULL)//error checking for file wether it is open or not
    {
	printf("File1 could not open\n");
    }
    else
	*argv++;

    //opening of file2
    fp2 = fopen(*argv, "w");

    if(fp2 == NULL)//error checking for file2 whether it is open or not
    {
	printf("File2 could not open\n");
    }


#if 1
    //logic to copy file1 content into file2
    while((ch = getc(fp1)) != EOF)
    {
	putc(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
#endif
#if 0 
    while(getc(fp1) != EOF)
	if(fgets(ch1, 60, fp1) != NULL)
	{
	    fputs(ch1, fp2);
	}
#endif
}

