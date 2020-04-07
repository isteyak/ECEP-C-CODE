
#include <stdio.h>

int main()
{
	int n,row,col,x,k;
 	
	printf("enter the number ");
        
	scanf("%d", &n);
	
        for (row=1; row<=n; row++)
	{      
 		// sum=0;
		for (col=1; col<=n; col++)
 		{
		     x=row+col;
 		     if (row == col || x == n+1)
		     {
		          printf("*");
                     }
                     else
		          printf(" ");
 		}
		printf("\n");

	}
return 0;
}
