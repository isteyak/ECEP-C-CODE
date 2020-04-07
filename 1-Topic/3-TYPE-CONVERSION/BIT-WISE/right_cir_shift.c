#include <stdio.h>


int main()
{
   unsigned int num,n;
    printf("enter the num and n vlue\n");

    scanf("%d%d", &num, &n);

    num = (num >> n) | (num << (sizeof(int) << 3) - n );

    printf("%u\n", num);
}
