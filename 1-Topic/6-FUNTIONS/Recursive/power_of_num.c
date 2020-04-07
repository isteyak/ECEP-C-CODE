#include <stdio.h>

int power(int, int);

int main()
{
    int a, n;

    //promt the user to enter the number
    printf("enter the number a\n");

    //read the given number
    scanf("%d", &a);
    
    //promt the user to enter the number
    printf("enter the number n\n");

    //read the given number
    scanf("%d", &n);

    int r;

    r = power(a, n);

    printf("result = %d\n", r);
}

int power(int a, int n)
{
    int s;

    if (n == 0)
    {
	return 1; 
    }
//    else
  //  {
	s = a * power(a, n - 1);

    //}
    return s;
}
