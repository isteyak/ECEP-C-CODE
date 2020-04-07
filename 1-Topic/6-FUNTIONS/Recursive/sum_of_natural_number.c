#include <stdio.h>


int main()
{
    int r, n;

    //promt the user to enter the number
    printf("enter the numner\n");

    //read the given number
    scanf("%d", &n);

    r = sum(n);

    printf("\b=%d\n", r);

}

int sum(int n)
{
    int s = 0;

    if (n == 0)
    {
	return;
    }
    else
	s = n + sum(n - 1);

	printf("%d+", n);

	return s;
}
