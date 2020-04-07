#include <stdio.h>

#define SWAP(num) num >> 4 | num << 4


int main()
{
    unsigned char num;

    printf("enter the number : ");

    scanf("%hhx", &num);

    num = SWAP(num);

    printf("after swapping : %hhx\n", num);
}
