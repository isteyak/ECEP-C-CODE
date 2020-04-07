/*
Title 		:program to calculate factorial of number
Auther		:Isteyak
Organisation	:Emertxe
Algoritham	:1.promt the user to enter the number
		 2.read that number
		 3.logic
		 //
     		   if (n == 0 || n == 1)
    		   {
			return 1;
    		   }
		   return n * fact(n - 1);
	          //call this function again and again till this given condition
*/
//inclusion of atandard library
#include <stdio.h>
 
//prototype os fact funtion
int fact(int);
//calling of main funtion
int main()
{
    int n;
    char choice;
do
{   //promt the user to enter the number
    printf("enter the number\n");

    //read the given value
    scanf("%d", &n);
    
    //calling of fact funtion
    int r = fact(n);

    printf("%d is factorial\n", r);

    printf("enter the choice to repeat [y/Y] : not repeat [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
    return 0;
}
//definition of fact funtion
int fact(int n)
{
    if (n == 0 || n == 1)
    {
	return 1;
    }
	return n * fact(n - 1);
}
