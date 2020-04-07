#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int mul(int a, int(*fp)(int, int))
{

    return a * (*fp)(2, 3);
}
int main()
{
    int r = mul(10, add);

    printf("%d = r\n", r);
    }
