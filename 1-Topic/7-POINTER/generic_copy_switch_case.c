#include <stdio.h>

void generic_copy(char *, char *, int);

int main()
{
    int a = 0x1a2b3c4d;

    int b;

    generic_copy((char *)&a, (char *)&b, 1);

    printf("%x, %x\n", a, b);

    double A = 10.35;

    double B;

    generic_copy((char *)&A, (char *)&B, 2);

    printf("%lf, %lf\n", A, B);
}

void generic_copy(char *p, char *q, int n)
{
    switch (n)
    {
	case 1:
	      *(int *)q = *(int *)p;
	      break;
	case 2:
	      
	      *(double *)q = *(double *)p;
	      break;
    }
}
