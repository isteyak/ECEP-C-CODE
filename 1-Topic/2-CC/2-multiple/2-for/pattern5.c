
#include <stdio.h>

int main()
{
	int n,row,col,space,k;
 	
	printf("enter the number ");
        
	scanf("%d", &n);
	space=n;
	for (row=1; row<=n; row++)
	{      
 		// sum=0;
		for (k=1; k<=space; k++)
		{
                  printf(" ");
		}
		space--;
		for (col=1; col<=row; col++)
 		{
		  printf("*");
 		}
		printf("\n");

	}
return 0;
}
