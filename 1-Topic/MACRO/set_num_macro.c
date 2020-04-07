#include <stdio.h>

#define IS_SET(num, n)  1 << n & num? 1 : 0


int main()

{
    unsigned char num;

    //promt the user to enter the input
    printf("enter the byte value : ");


    //read the byte
    scanf("%hhx", &num);

    int n;

    printf("enter n value : ");

    scanf("%d", &n);

    if(IS_SET(num, n))
    {
	printf("bit is set \n");
    }
    else
    {
	printf("bit is clear\n");
    }


}
