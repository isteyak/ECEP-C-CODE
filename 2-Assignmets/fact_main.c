/*
Title 		:program to find factorial of number using recursive main
Author		:Isteyak
Organisation	:Emertxe
Algoritham 	:
		1.read the number from user
		2.call the main funtion recursively till the last num
		3.print the fact value.
*/



#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dclaration of variabl
    static int c = 0, fact = 1;
    static int n;

    //logic
    if(c == 0)
    {
	//promt the user to netr the number
	printf("Enter the n value : ");

	//reda the given number
	scanf("%d", &n);
	c++;
    }

    else if(c == n)
    {
	fact = fact * c;

	//print the fact value
	printf("%d is fact\n", fact);
	return 0;
    }
    else
	//fact logic
       fact = fact * c++;
       
       main();
   

 }
