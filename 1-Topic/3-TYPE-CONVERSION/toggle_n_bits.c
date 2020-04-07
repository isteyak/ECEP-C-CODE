/*
program to set n bit of number
*/

//inclusion of standard libarary
#include <stdio.h>

int main()
{
    //declaration of datatypes
    int num,n,loc;

    //prompt the user to enter the number in hex format
    printf("enter the number in hex format\n");

    //read the given number
    scanf("%x", &num);

    //promt the user to enter the n
    printf("enter the n \n");

    //read the n value
    scanf("%d", &n);
    
    //promt the user to enter the loc
    printf("enter the loc \n");

    //read the n value
    scanf("%d", &loc);

    //logic
    num = num ^ ~(~0 << n) << loc;

    //print the result
    printf("%x\n", num);

    return 0;
}
