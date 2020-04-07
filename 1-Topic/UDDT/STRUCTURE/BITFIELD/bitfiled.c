#include <stdio.h>

struct sample
{
    int a : 2;
    int b : 2;
};

int main()
{
struct sample x;

x.a = 2;

printf("a : %d\n", x.a);
}
