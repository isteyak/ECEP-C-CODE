#include <stdio.h>

void generic_swap(void *, void *, size_t);

int main()
{
    int a = 0x1a2b3c4d;

    int b = 0x2a3b4c5d;;

    generic_swap(&a, &b, sizeof(int));

    printf("%x, %x\n", a, b);

    double A = 10.35;

    double B = 10.50;

    generic_swap(&A, &B, sizeof(double));

    printf("%lf, %lf\n", A, B);
}

void generic_swap(void *p, void *q, size_t n)
{
    int i;
    char temp;

    for (i = 0; i < n; i++)
    {
	temp = *(char *)p;
	*(char *)p = *(char *)q;
	*(char *)q = temp;

	p = p + 1;
	q = q + 1;
    }
}
