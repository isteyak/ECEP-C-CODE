#include <stdio.h>


int main()
{
    int a = 10;

    int *iptr = &a;
    int *jptr;
       jptr = &a;

    printf("a : %d\n", *iptr);
    printf("a : %p\n", iptr);
    printf("a : %d\n", *iptr);
    printf("a : %d\n", *jptr);
}
