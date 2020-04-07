#include <stdio.h>


int main()
{
    int a = 10;
    int b = 20;

      int *const p = &a;
     //p = &b;

     *p = 20;

     printf("%d\n", a);
}
