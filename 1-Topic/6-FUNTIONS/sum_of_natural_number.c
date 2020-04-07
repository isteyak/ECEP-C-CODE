/*
program to find the sum of digit
*/

//inclusion of libarary
#include <stdio.h>

//declaration of user defined funtion
int sum_of_natural_number(int);


int main()
{ 
    //declaration of datatypes
    int  n;

    //promt the user to enter the number
    printf("enter the number  n\n");

    //read the given number
    scanf("%d ", &n);

    //store the return integer value of funtion call of sum_of_digit
    int result = sum_of_natural_number(n);

    //print the result
    printf("result = %d\n", result);

}

//definition of sum_of_digit funtion
int sum_of_natural_number(int n)
{
    int sum = 0;
    
    //logic to perform sum of digit
/*    while (n)
    {
	sum = sum + n;
	
	n--;
    }
*/
    sum = (n * (n + 1))/2;
     //return the sum value to funtion
    return sum;
}
