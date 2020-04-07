/*
program 		:program to calculate avrage of array element
Author			:Isteyak
Organisation		:Emertxe
Algoritham		:
			1. promt the user to enter the choice
			  1.1. calcualate avg using scanf
			  1.2. calculate avg through command line argument
			  1.3. calculate avg through enviremental variable
			2.0 read the array element in buffer acording to option
			  2.1. read the array element from user
			  2.1. add all the elements
			  2.3. calculate avrage of sum value
			3.0 repeat the 2.0 step for all the input
*/




//inclusion of standard library
#include <stdio.h>
#include <string.h>


int main(int argc, char **argv, char *envp[])
{
    //declaration of variable
    int i;
    int count = 0, sum = 0, n, option;
    char *tok;
    char *temp;
    int a[n];
    *argv++;
    char choice;
    do
    {
    //promt the user to enter the option to perform the operation
    printf("Enter the option :\n1.calculate avg using scanf.\n2.calculate avg through cla.\n3.calculate avg through enviremental variable.: ");

    //read the option
    scanf("%d", &option);

    //switch the operation according to given option
    switch(option)
    {
	case 1:
	    //promt the user to enter the number of element
	    printf("Enter number of element in array: ");
	    //read the given value
	    scanf("%d", &n);
             sum = 0;
	     //promt the usr to enter the elements of array
	    printf("Enter the %d element in array: ", n);
	    for(i = 0; i < n; i++)
	    {
		scanf("%d", &a[i]);//read the element of array

		sum += a[i];//calculate the sum of given elements
	    }

	    printf("%.2f  is avg \n", (float)sum/n);//print the avg result
	    break;

	case 2:
	    sum = 0;
	    //logic to calculate sum of cla argument variables
	    for( ; *argv; *argv++)
	    {
		sum += atoi(*argv);//here using atoi funtion to convert cla string argument into integer
	    }

	    printf("%.2f is avg \n", (float)sum/(argc-1));//print avg of argument
	    break;

	case 3:
	    sum = 0;
            //logic to get array of anvirement variable address
	    for(i = 0; envp[i] != NULL; i++)
	    {
		if(strncmp(envp[i], "array", 5) == 0)//here we are using strncmp funtion to comapare the string into envirement variable
		    temp = envp[i];//here after matching array string. storing there addres into temp pointer variable
	    }

            //logic to extract argument variable from matching string
	    tok = strtok(temp,"=");

	    while(tok != NULL)
	    {
		tok = strtok(NULL, " ");
		if(tok != NULL)
		{
		    sum += atoi(tok);//sum all the element of string
		    count++;
		}
	    }

	    printf("%.2f is avg \n", (float)sum/count);//print the avg value
	    break;
    }
    printf("Enter the choice to repeat [y/Y] : [n/N] : ");
    scanf("\n%c", &choice);
    __fpurge(stdin);
    }while(choice == 'y' || choice == 'Y');
}
