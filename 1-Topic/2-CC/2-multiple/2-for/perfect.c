/*
program to check whether the given number is perfect or not
*/

//declaration of standard libarary

#include <stdio.h>

int main()
{   
    //declaration of datatypes
    int num,i=1,sum=0;

    //promt the user to enter number
    printf("enter the number\n");

    //read the guven number
    scanf("%d", &num);

    if (num > 0 && num < 2000000)
    {
    
    	//logic
    
    	while (i <= num/2)
    	{
		if (num % i == 0)
	 	{
	    		sum=sum+i;
		}
		i++;
    	}

    	if (sum == num)
    	{
		printf("%d : is perfect number\n", num);
    	}
    	else
		printf("%d  : is not a perfect number\n", num);
    }
    else if (num < 0)
    {
	printf("INVALID NUMBER\n");
    }
    else
    {
	printf("number out of range\n");
    }

	return 0;
}
