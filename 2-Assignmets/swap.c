#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;

    //promt the user to enter the value
    printf("enter the value : ");

    //read the value
    scanf("%d", &a);
    
    //promt the user to enter the value
    printf("enter the value : ");

    //read the value
    scanf("%d", &b);

    swap(&a, &b);

    printf("%d = a, %d = b\n", a, b);
}

void swap(int *p, int *q)
{

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;


}
