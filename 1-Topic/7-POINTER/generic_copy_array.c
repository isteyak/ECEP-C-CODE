#include <stdio.h>

void generic_copy(void *, void *, int, int);
void print_array(int *, int);
int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    int b[5];

    generic_copy(a, b, sizeof(a)/sizeof(a[0]), sizeof(a[0]));

    print_array(b, sizeof(b[0]));

    
}

void generic_copy(void *p, void *q, int z, int n)
{
    int i;

    for (i = 0; i < n*z; i++)
    {
	*(char *)q = *(char *)p;

	p = p + 1;
	q = q + 1;
    }
}

void print_array(int *p, int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
	printf("%d ", *p);

	p = p + 1;
    }
    printf("\n");
}
