#include <stdio.h>


int main()
{

    int num, n;

    //promt the user to enter the num
    printf("enter the num\n");

    //read the given number
    scanf("%d", &num);
    //promt the user to enter the n
    printf("enter the n\n");

    //read the given n
    scanf("%d", &n);

    num = (num << n) | num >> ((sizeof(int) << 3) - n);


    printf("%d\n", num);
}
