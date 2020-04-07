/*
Title 		:program to print hello in x format
Author		:Isteyak
Organisation	:Emetxe
Algoritham 	:pf(Enter the row and col of matrix)
		 read the given value in any variable
		 use for loop for itteration
    		 for (row = 1; row <= num; row++)
    		 {
			for (col = 1; col <= num; col++)
		 	{
            			x = row + col;
	    		    if (row == col || x == num + 1)
	    		    {
				if (row == col && x == num + 1)
				{
				printf("hellohello");
				}
			    }
			    else
		    		printf("hello ");
	    		}
	    		else
	    		{
				printf(" ");
	    		}
		 	}		
				printf("\n");
    		 }
*/


//inclution of standard libarary
#include <stdio.h>


int main()
{ 
    //declaration of variables
    int row,col,num,x;
 
    //promt the user to enter the number
    printf("enter the number  : ");

    //read the given number
    scanf("%d", &num);

    //logic
    for (row = 1; row <= num; row++)
    {
	for (col = 1; col <= num; col++)
	{
            x = row + col;
	    if (row == col || x == num + 1)
	    {
		if (row == col && x == num + 1)
		{
		    printf("hellohello");
		}
		else
		    printf("hello ");
	    }
	    else
	    {
		printf(" ");
	    }
	}
	printf("\n");
    }
    return 0;
}
