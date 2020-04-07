#include <stdio.h>

void my_str_cpy(char *, char *);

int main()
{
    char s[] = "isteyak";
    char d[10];

    my_str_cpy(d, s);

    printf(" copied string d = %s\n", d);
}

void my_str_cpy(char *d, char *s)
{
    while(*s)
    {
	*d++ = *s++;
    }
    *d = '\0';
}
