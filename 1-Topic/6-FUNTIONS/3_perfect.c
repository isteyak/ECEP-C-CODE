/*
program to check whether the given number is perfect or not
*/

//inclusion of standard libarary

#include <stdio.h>



#define VALID 1
#define IN_VALID 2
#define PERFECT 3
#define NOT_PERFECT 4


int print_perfect(int);

int is_perfect(int);

int is_num_valid(int);

int main()
{   
    //declaration of datatypes
    int num;

    //promt the user to enter number
    printf("enter the number\n");

    //read the guven number
    scanf("%d", &num);

   if (is_num_valid(num) == VALID)
   {
       print_perfect(num);
   }
   else
   {
       printf("INVALID INPUT\n");
   }
}


int print_perfect(int num)
{
   if (is_perfect(num) == PERFECT)
   {
       printf("%d  : is perfect number\n", num);
   }
   else
       printf("%d  : is NOT_perfect number\n", num);

}

int is_num_valid(int num)
{

    if (num > 0 && num < 2000000)
    {
	return VALID;
    
    }
    else if (num < 0) 
    {

     return IN_VALID;
    }
    else

	return IN_VALID;
}

int is_perfect(int num)
{
    int sum = 0,i = 1;
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
		return PERFECT;
   	}
    	else
	    return NOT_PERFECT;
    
}
