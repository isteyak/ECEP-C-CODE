/*

Title 		:Program to find even and odd number
Auther 		:Isteyak
Organisation    :Emertxe

Algoritham 	:pf(to enter the the number)
		 read the given number
		 if (number % 2 == 0)
		 {
		     pf(it is even)
		 }
		 else
		     pf(odd)

*/

//inclusion of standard libarary
#include <stdio.h>


int main()
{   
    //declarartion of variable
    int num;

    //promt the user to enter the number
    printf("enter the number\n");

    //read the guven number
    scanf("%d", &num);

    //logic
    if (num > 0)//condition to check whhether the number is +ve or not if it is +ve then do other thing else go in else part
    {
    	if (num % 2 == 0)//condition to check whether the guven number is even or not
  	  {
		printf("%d : is +ve even number\n", num);

    	  }
    	else
		printf("%d : is +ve odd number\n", num);
    }
    else if(num < 0)
    {
    	if (num % 2 == 0)//condition to check whether num is even or not
  	  {
		printf("%d : is -ve even number\n", num);

    	  }
    	else
		printf("%d : is -ve odd number\n", num);
    }
    else
    {
	printf("%d : is neutral\n", num);
    }


return 0;

}
