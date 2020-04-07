/*
program to find avrage of n natural number
*/
//inclusion of standard libarary
#include <stdio.h>



int main()
{   
    //declaration of data types
    int num,sum=0,i;
    float avr;

    //promt the user to enter the natural number
    printf("enter the natural number\n");

    //read the given number
    scanf("%d", &num);

    //logic
    for (i=1; i<=num; i++)
    {
	sum=sum+i;
    }
    avr=sum/num;
    printf("%f\n", avr);

    return 0;
}
