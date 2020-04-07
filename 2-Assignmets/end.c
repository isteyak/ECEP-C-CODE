


#include <stdio.h>



int main()
{
    unsigned int i;
    char *c = (char *)&i;

    if(*c)
    {
	printf("litt \n");
    }
else
{
    printf("lbig \n");
}
}
