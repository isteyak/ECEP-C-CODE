#include <stdio.h>

int main()
{
    unsigned mask = 1 << (sizeof(int) << 3) - 1;
    int num;

    printf("enter the number\n");

    scanf("%d", &num);

    for ( ; mask; mask >>= 1)
    {
	num & mask ? putchar('1') : putchar('0');

    }
    printf("\n");
}
