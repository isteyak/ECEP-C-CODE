/*
Title  		:program to check whether the given number is perfect or not
Author		:Isteyak
Organisation 	:Emertxe
Algoritham	:
		pf(Enter the number)
		read the given number
    		while (i <= num/2)
    		{
			if (num % i == 0)
	 	{
	    		sum=sum+i;
		}
			i++;
    		}
		if (sum == num)
		    pf(it is a perfect number)

*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{   
    char choice;
do
{
    //declaration of datatypes
    int num,i=1,sum=0;

    //promt the user to enter number
    printf("enter the number\n");

    //read the given number
    scanf("%d", &num);
    
    //logic if the num is > 0 and < 200000 then perform the operation
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
    printf("enter the choice to repeat : [y/Y] not repeat : [n/N] : ");
    scanf("\n%c", &choice);
    sum = 0;
}while(choice == 'y' || choice == 'Y');
	return 0;
}
