/*
program to print X_star pattern
*/

//inclusion od standard libarary
#include <stdio.h>

int main()
{       
	//declaration of datatypes
	int n,row,col,space=0,k;
 	
	//promt the user to enter the number
	printf("enter the number ");
        
	//Read the given number
	scanf("%d", &n);
	
	//logic
        for (row=n; row>=1; row--)
	{      
		for (k=1; k<=space; k++)
		{
                     printf(" ");
		}
                space++;
                for (col=1; col<=(2*row-1); col++)
 		{    
		     if (col==1 || col==(2*row-1))
		     {
 		      	  printf("*");
		     }
                     else
                         printf(" ");
		}
		printf("\n");

	}
        space=n-1;
        for (row=1; row<=n; row++)
        {
		
                for (k=1; k<=space; k++)
		{
		     printf(" ");

		}
                space--;
                for (col=1; col<=(2*row-1); col++)
                {   
		    if (col==1 || col==(2*row-1))
		    {
                    	printf("*");
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
