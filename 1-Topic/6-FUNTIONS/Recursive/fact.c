#include <stdio.h>


int main()
{
    int n;
    char choice;
do
{
    printf("enter the number\n");

    scanf("%d", &n);

    int r = fact(n);

    printf("%d is factorial\n", r);

    printf("enter the choice to repeat [y/Y] : not repeat [n/N] : ");
    scanf("\n%c", &choice);
}while(choice == 'y' || choice == 'Y');
    return 0;
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
	return 1;
    }
	return n * fact(n - 1);
}
