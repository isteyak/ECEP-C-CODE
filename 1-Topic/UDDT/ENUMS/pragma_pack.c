#include <stdio.h>

#pragma pack(2)
struct test
{
    char s;
    int b;
    char c;
};

int main()
{
    struct test x[10];

    printf("%zu\n", sizeof(x));
}
