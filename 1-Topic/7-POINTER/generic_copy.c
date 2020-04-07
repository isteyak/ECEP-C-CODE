#include <stdio.h>

void generic_copy(void *, void *, size_t);

int main()
{
    int a = 0x1a2b3c4d;

    int b;

    generic_copy(&a, &b, sizeof(int));

    printf("%x, %x\n", a, b);

    double A = 10.35;

    double B;

    generic_copy(&A, &B, sizeof(double));

    printf("%lf, %lf\n", A, B);
}

void generic_copy(void *p, void *q, size_t n)
{
    int i;

    for (i = 0; i < n; i++)
    {
	*(char *)q = *(char *)p;

	p = p + 1;
	q = q + 1;
    }
}
