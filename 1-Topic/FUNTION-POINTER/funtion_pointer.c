#include <stdio.h>



int main()
{
    int a = 1, b = 10;

    int r = add(a, b);

    printf("%d\n", r);

    int (*fp)(int, int) = add;

    int s = (*fp)(a, b);

    printf("%d\n", s);
}

int add(int a, int b)
{
    return a + b;
}
