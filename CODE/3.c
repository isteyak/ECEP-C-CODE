

#include <stdio.h>


int main()
{
    char *p = "sometiome\0helloworld";

    printf("%s\n", p);
    printf("%s\n", p + 10);
}
