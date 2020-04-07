/*
program to find the sum of digit
*/

//inclusion of libarary
#include <stdio.h>

//declaration of user defined funtion
int sum_of_digit(int);


int main()
{ 
    //declaration of datatypes
    int num;

    //promt the user to enter the number
    //printf("enter the number\n");

    //read the given number
    //scanf("%d", &num);

    //store the return integer value of funtion call of sum_of_digit
    int sum = sum_of_digit(num);

    //print the result
    printf("result = %d\n", sum);

}

//definition of sum_of_digit funtion
int sum_of_digit(int num)
{
    int sum = 0;
    
    printf("enter the number\n");

    scanf("%d", &num);
    //logic to perform sum of digit
    while (num)
    {
	sum += num % 10;
	
	num /= 10;
    }
     //return the sum value to funtion
    return sum;
}
