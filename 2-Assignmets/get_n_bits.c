#include <stdio.h>


int main()
{
    
    int num,n;
    
    //promt the user to enter the number
    printf("enter the number\n");

    //read the given number
    scanf("%d", &num);

    //promt the user to enter the n value
    printf("enter the n value\n");

    //read the n value
    scanf("%d", &n);


    num = num & ~(~0 << n);

    printf("result = %d\n", num);
}
