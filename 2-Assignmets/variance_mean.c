/*
Title		:program to calculate ..... of given numer
Author		:isteyak 
Organisation	:Emertxe
Algoritham
*/



#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int sum(int , ...);

int main()
{

    int n, i;

    printf("Enter the value of  n : ");
    scanf("%d", &n);

    int *p = malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
	printf("p[%d] -> ", i);
	scanf("%d", p + i);
	printf("\n");
    }

    int mean = sum(n,p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7], p[8], p[9]);
    printf("%d is mean\n", mean/n);
}

int sum(int count, ...)
{
    va_list ap;

    int sum = 0;

    int i, d;

    va_start(ap, count);

    for(i = 0; i < count; i++)
    {
	d = va_arg(ap, int);


	sum += (d * d);

    }

    va_end(ap);

return sum;
}
