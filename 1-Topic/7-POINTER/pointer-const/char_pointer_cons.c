#include <stdio.h>

#define size 50
int main()
{
    char a[size] = "name";
      a[size] = "man";

    a[0] = 'r';

    printf("%c\n", a[0]);
}
