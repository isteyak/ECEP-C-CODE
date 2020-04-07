#include <stdio.h>

#include <stdarg.h>
int add(int, ...);
int main()
{
   int sum = add(3,3,4,5);

   printf("%d is sum\n", sum);
}

int add(int count, ...)
{
    int i, sum;
    va_list ap;

    va_start(ap, count);

    for(i = 0; i < count; i++)
    {
	sum += va_arg(ap, int);

    }

    va_end(ap);
    return sum;
}
