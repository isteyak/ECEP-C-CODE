#include <stdio.h>

#define GRETEST_IS(a, b, c)  a > b? a > c? a : c : b > c? b : c

int main()
{
    int a, b, c;

    printf("enter the three number : ");

    scanf("%d%d%d", &a, &b, &c);

    int m = GRETEST_IS(a, b, c);

    printf("%d is gretest\n", m);
}
