#include <stdio.h>


int main()
{
    
    int num,n,pos;
    
    //promt the user to enter the number
    printf("enter the number\n");

    //read the given number
    scanf("%d", &num);

    //promt the user to enter the n value
    printf("enter the n value\n");

    //read the n value
    scanf("%d", &n);

    //promt the user to enter the n value
    printf("enter the  pos\n");

    //read the n value
    scanf("%d", &pos);



    //num = (num & ~(~0 << n) << pos) >> ((sizeof(int) << 3) - pos);

    num = (num & ~(~0 << n) << pos) >> pos;

    printf("result = %d\n", num);
}
