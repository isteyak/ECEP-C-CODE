#include <stdio.h>


int main()
{
    int a = 5, b = 3;

    sub_fun(a, b);
}


int sub_fun(int a , int b)
{
    int c = a - b;


    printf("%d\n", c);
}
