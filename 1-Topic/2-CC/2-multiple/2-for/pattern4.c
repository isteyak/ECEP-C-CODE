
#include <stdio.h>

int main()
{
	int n,row,col,space=0,k;
 	
	printf("enter the number ");
        
	scanf("%d", &n);
	
	for (row=n; row>=1; row--)
	{      
 		// sum=0;
		for (k=1; k<=space; k++)
		{
                  printf(" ");
		}
		space++;
		for (col=row; col>=1; col--)
 		{
		  printf("*");
 		}
		printf("\n");

	}
return 0;
}
