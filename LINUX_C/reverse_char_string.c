#include <stdio.h>
#include <string.h>
void reverse(char *s);

int main()
{
    char s[] = "hello my name is siteyak";
   // char *s = "hello my name is siteyak";

     reverse(s);

    printf("%s is rev\n", s);
}

void reverse(char *s)
{
    int c, i, j;

    for(i = 0, j = strlen(s) - 1; i < j ; i++, j--)
    {
	c = s[i];

	s[i] = s[j];

	s[j] = c;
    }
}
