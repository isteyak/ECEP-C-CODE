#include <stdio.h>


int main()
{
    int a = 10;

     const int *p = &a;
     *p = 20;

     printf("%d\n", a);
}
