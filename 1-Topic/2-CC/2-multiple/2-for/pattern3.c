
#include <stdio.h>

int main()
{
	int n,row,col,sum=0;
 	
	printf("enter the number ");
        
	scanf("%d", &n);
	
	for (row=1; row<=n; row++)
	{      
 		// sum=0;
		for (col=1; col<=row; col++)
 		{
                  sum=sum+1;
		  printf("%d", sum);
 		}
		printf("\n");

	}
return 0;
}
