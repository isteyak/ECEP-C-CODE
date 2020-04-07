

#include <stdio.h>

#include <string.h>


int main(int argc, char *argv[])
{
    char str[24];
    char str2[24];
//exmple 1
    sprintf(str, "HELLO WoRLD");

    printf("%s\n", str);
//example 2
int n;
    int i;
    i = 4;
    sprintf(str,"value of i = %d", i);

    printf("%s\n", str);
    n = strlen(str);

    printf("length str is %d\n", n);

    strcpy(str2, str);

    printf("%s is str\n", str2);
    return 0;
}
