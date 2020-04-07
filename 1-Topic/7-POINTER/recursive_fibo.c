#include <stdio.h>

int fibo(int, int, int);

int main()
{
    int l, a = 0, b = 1;

    //promt the user to enter the number
    printf("enter the number l\n");

    //read the given number
    scanf("%d", &l);
    

    printf("%d,", a);
    printf("%d,", b);
    int r;

     fibo(a, b, l);
	printf("\b");
	printf("\n");

}

int fibo(int a, int b, int l)
{
    int s, z;

    //z = a + b;
    //b = a + b;
    //printf("%d,", z);

    //a = b;

    //b = z;

    if ((z = a + b) <= l)
    {

      a = b;
      b = z;
      printf("%d,", z);
	 fibo(a, b, l);

    }
    else
	return 0;
}
