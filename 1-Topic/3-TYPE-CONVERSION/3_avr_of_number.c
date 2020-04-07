/*
program to find avrage of n natural number
*/
//inclusion of standard libarary
#include <stdio.h>



int main()
{   
    //declaration of data types
    int a[5],sum=0,i,n;
    float avr;

    //promt the user to enter the natural number
    printf("enter the natural number\n");

    //read the given number
    scanf("%d", &n);
    
    //promt the user to enter the array number
    printf("enter the array of number\n");

    //logic
    for (i=0; i<=n-1; i++)
    {
	scanf("%d", &a[i]);
	sum=sum+a[i];
    }
    avr=sum/n;
    printf("%f\n", avr);

    return 0;
}
