#include <stdio.h>


int add(int a, int b)
{
    return a + b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
int (*fp[3])(int, int) = {add, mul, div};
int i;

for(i = 0; i < 3; i++)
{
    printf("%d\n", (*fp[i])(2, 3));
}


    }
