#include <stdio.h>

#define size 50
int main()
{
    char *a = "name";
      a = "man";

    a[0] = 'r';

    printf("%c\n", a[0]);
}
