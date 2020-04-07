#include <stdio.h>
#include <string.h>



int main()
{
    char a[10] = "hello";

    printf("%s\n", a);

    //a[10] = "world";
    strcpy(a, "world");
    printf("%s\n", a);
}
