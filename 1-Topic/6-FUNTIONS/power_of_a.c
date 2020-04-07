/*
program to find the sum of digit
*/

//inclusion of libarary
#include <stdio.h>

//declaration of user defined funtion
int power(int, int);


int main()
{ 
    //declaration of datatypes
    int a, n;

    //promt the user to enter the number
    printf("enter the number a and n\n");

    //read the given number
    scanf("%d %d", &a, &n);

    //store the return integer value of funtion call of sum_of_digit
    int p = power(a, n);

    //print the result
    printf("result = %d\n", p);

}

//definition of sum_of_digit funtion
int power(int a, int n)
{
    int p = 0;
    
    int i=0;
    //logic to perform sum of digit
    while (i < n)
    {
	p = a * a;
	
	i++;
    }
     //return the sum value to funtion
    return p;
}
