

#include <stdio.h>

double pow_a(double, double);
int main()
{
    double x = 2;

    double y = 4;

    printf("%lf", pow_a(x, y));
}

double pow_a(double x, double y)
{
    double pow  = 1;
    while(y)
    {
	pow = pow * x;

	y--;
    }

    return pow;
}
