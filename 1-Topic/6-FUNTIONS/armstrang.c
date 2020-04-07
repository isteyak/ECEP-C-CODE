/*
to print all the armstrang number between 100 to 999
*/

#include <stdlib.h>
#include <stdio.h>

#define ARMSTRONG 1
#define NOT_ARMSTRONG -1


    //declare the protypes here
    int is_armstrong(int num);

    void print_armstrong(void);

    
int main()
{
    //clear the system screen

    system("clear");

    print_armstrong();

    printf("\n");

    return 0;

}


//define the funtions here
void print_armstrong(void)
{
    int num;

    for (num =100; num <= 999; num++)
    {
	if (is_armstrong(num) == ARMSTRONG)
	{
	    printf("%d\t", num);
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
