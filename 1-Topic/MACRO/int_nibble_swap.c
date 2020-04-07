#include <stdio.h>



int main()
{
    int a;

    printf("enter the number : ");

    scanf("%d", &a);

    char *p = (char *)&a;

    printf("%u**", *p);

    p = p + 1;
    printf("%d**", *p);
}
