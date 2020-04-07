/*
Title           : Generation of fibonacci series
Author          : Isteyak
Organisation    : Emertxe
Algoritham 	:pf(enter the number)
		 read the given number
		 //logic to generate +ve number fibonacci series
		 a = 0, b = 1;
		 for (i = 0; i <= num; i++)
		 {
		     sum = a + b;
		     pf(sum);
		     a = b;
		     b =  sum;
		 }
		 //logic to generate -ve number fibonacci series
		 a = 0, b = 1;
		 for (i = 0; i <= num; i++)
		 {
		     sum = a - b;
		     pf(sum);
		     a = b;
		     b =  sum;
		 }

*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
	//Declaration of variable
	char choice;
do
{
	int num, temp, i, a = 0, b = 1, sum = 0;

	//Prompt the user to enter the number
	printf("enter the number : ");

	//Read the number
	scanf("%d", &num);
        
	//print the initial 2 value of fibonacci series
	printf("%d, ", a);
	printf("%d, ", b);

	//logic to genrate +ve number fibonacci series
	if (num > 0)
	 {
	  for (i = 0; i <= num; i++)
    	{
		  sum = a + b;
		  if(sum < num)
		  {
     	  		printf("%d, ", sum);
		  }
		  a = b;
		  b = sum;
	    }
	}
	//logic to generate -ve number fibonacci series
	else if (num < 0)
	{
		for (i = num*(-1); i >= 1; i--)
		{
			sum = a - b;
			temp = num * (-1);
			if (sum >= num && sum <= temp)
			{
				printf(" %d,", sum);
				a = b;
				b = sum;
			}

		}
	}
	printf("\n");
	printf("enter the choice to repeat : [y/Y] : not repet [n/N] : ");
	scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
return 0;
}
