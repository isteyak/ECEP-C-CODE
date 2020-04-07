#include <stdio.h>

#define int_ptr int *
//typedef int * int_ptr;
int main()
{
    int_ptr ptr1, ptr2, ptr3;

    printf("%p\n%p\n%p\n", ptr1, ptr2,ptr3);
}
