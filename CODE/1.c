
#include <stdio.h>



int main()
{
    int y = 2;
    int z;

    z = y + (y = 10);

    printf("%d\n", z);
}
