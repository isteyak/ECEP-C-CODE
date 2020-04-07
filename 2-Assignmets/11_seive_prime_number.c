/*
Title		:program to print prime number in given range
Auther		:Isteyak
Organisation	:Emertxe
Algoritham	:
		//read the number from user
		//logic
		//declare the 1 array to store the number
    		int array[20], j = 1, i;
    		array[0] = 2;//a[0] should be 2 for prime number
    		for (i = 2; i < num; i++)
    		{
			if ( num % i != 0)//if num is not perfect divisible by i then store that i value in a array and increment the i value in loop
			{
	    			array[j] = i;//to store the i value in a array
	    			j++;//to increment the position of array
			}
    		}
*/
//inclusion of standard library
#include <stdio.h>

#define LIMIT 2000

//prototypes of prime number funtion
int prime_number(int);


int main()
{
    //declaration of variable
    int num;
    char choice;
do
{
    //promt the user to enter the number
    printf("enter the value of n : ");

    //read the given value
    scanf("%d", &num);

    if (num < 0)
    {
	printf("INVALID INPUT\n");
    }
    else if (num > 1999999)
    {
	printf(" INPUT OUT OF RANGE\n");
    }
    else

    //calling the prime funtion and passing the num value
    prime_number(num);

    printf("choose the option to repeat : [y/Y] not repeat [n/N] : ");
    scanf("\n%c", &choice);
}while (choice == 'y' || choice == 'Y');
return 0;
}

//definition of prime funtion
int prime_number(int num)
{
    int array[LIMIT], j = 2, i;
    array[0] = 0;
    array[1] = 0;
    //logic to get prime number in between range 1 to num
    for (i = 2; i < num; i++)
    {
	    array[j] = i;
	    j++;
	   
    }
    
    for (i = 2; i < num; i++)
	{

           for (j = 2; j < num; j++)
	   {
	       array[(i * j)] = 0;

	   }
	}
    printf("the primes less than or equal to %d are : ", num);
    //loop to print the array value
    for (i = 0; i < j; i++)
    {
	if (array[i] != 0)
	{
		printf("%d,", array[i]);
	}
    }
    printf("\n");
    return 0;
}
