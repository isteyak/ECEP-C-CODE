#include <stdio.h>


int main()
{
    int n;

    //promt the user to enter the number
    printf("enter the number\n");

    //read the number
    scanf("%d", &n);

    disp(n);
}

int disp(int n)
{
    if (n == 0)
    {
	return;
    }
    else
	disp(n-1);
	printf("\b%d, ", n);
	return 0;
}
