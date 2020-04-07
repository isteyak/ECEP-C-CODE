#include <stdio.h>


int main()
{
    int n, r;

    //promt the user to enter the numebr
    printf("enter the number\n");
    //read the given number
    scanf("%d", &n);

    r = sum_of_digit(n);

    printf("\b=%d\n", r);
}

int sum_of_digit(int n)
{
    int d, s;

    d = n % 10;

    if (n == 0)
    {
	return;
    }
    else
    {
	s = d + sum_of_digit(n / 10);

	printf("%d+",d);

    }
    return s;

}
