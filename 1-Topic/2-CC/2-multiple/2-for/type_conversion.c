#include <stdio.h>

int main()
{
    int i = 0x134c4f3a;
    short int s;
    char c;

    s=i;
    c=i;

    printf("i : %X\n", i);
    
    printf("i : %X\n", s);
    printf("i : %X\n", c);
}
