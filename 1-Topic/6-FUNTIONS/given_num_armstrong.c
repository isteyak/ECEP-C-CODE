/*
to print all the armstrang number between 100 to 999
*/

#include <stdlib.h>
#include <stdio.h>

#define VALID 2
#define IN_VALID -2
#define ARMSTRONG 1
#define NOT_ARMSTRONG -1


    //declare the protypes here
    int is_armstrong(int);
    int is_valid(int, int);

    void print_armstrong(int, int);

    
int main()
{
    //clear the system screen

    system("clear");

    int lower, upper;

   printf("enter the lower end\n"); 
    scanf("%d", &lower);
   
   printf("enter the upper end\n"); 
    scanf("%d", &upper);

    if (is_valid(lower, upper) == IN_VALID)
    {
	printf("INVALID INPUt\n");
	return -3;
    }
    else
    {

    print_armstrong(lower, upper);

    printf("\n");
    }

    return 0;

}


//define the funtions here
void print_armstrong(int lower, int upper)
{
    int num;

   for (num = lower; num <= upper; num++)
   {
	if (is_armstrong(num) == ARMSTRONG)
	{
	    printf("%d  : is armstrong\n", num);
	}

   }
    
}

int is_armstrong(int num)
{
    int temp = num;
    int digit, sum = 0;

    while (temp)
    {
	digit = temp % 10;
	sum += digit * digit * digit;
	temp = temp / 10;
    }

    if (num == sum)
    {
	return ARMSTRONG;
    }
    else
    {
	return NOT_ARMSTRONG;
    }
}

int is_valid(int lower, int upper)
{
    if (lower < 100 || lower > 999)
    {
	return IN_VALID;
    }
      else if ((upper < 100 || upper > 999) && upper <= lower)
    {

	return IN_VALID;
    }
    
}
