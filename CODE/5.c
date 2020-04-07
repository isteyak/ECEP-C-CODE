

#include <stdlib.h>
#include <stdio.h>

void foo(char *ptr)
{
    ptr = (char *)     malloc(sizeof(ptr));
}

int main()
{
    char *p;

    foo(p);

    printf("%x\n", p);
}
