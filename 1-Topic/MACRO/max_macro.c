#include <stdio.h>


#define MAX(x, y)  x > y? x : y


int main()
{
    int x = 10, b = 20;

    int m = MAX(x, b);

    printf("%d** is max\n", m);
}
