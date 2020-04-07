#include <stdio.h>


int main()
{
    unsigned int n, i, val, k;

printf("enter the number : ");

scanf("%d", &n);

i=1;
k = 1;
val = i & n;

if(val == 1)
{
    while(n)
    {
	val = k & n;
	if(val == 1)
	{
	    i = i << 1;

	    n = n >> 1;
	}
	else
	{
	    n=n>>1;
	}
	
    
    }
    val = i;
    }
    else
    {
	i = 1;
	val = n | i;
    }
    



    printf("%d \n", val);
}
