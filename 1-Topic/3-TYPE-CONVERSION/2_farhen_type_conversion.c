#include <stdio.h>



int main()
{
    int f,c;

    printf("enter the farenheight number\n");

    scanf("%d", &f);

    c=(0.556f)*(f-32);

    printf("celcius : %d\n", c);

    return 0;

}
