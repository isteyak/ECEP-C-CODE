#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    int (*p)[3] = malloc(3 * sizeof(int[3]));

    for( i = 0; i < 3 * sizeof(int) - 6; i++)
    {
	*(*p + i) = i + 1;
    
    }
    for ( i = 0; i < 3; i++)
    {
	*(p[2] + i) = *(p[1] + i) + *(p[0] + i);
    }

    printf("the value @ address %p , %d\n", (p[2] + 1), *(p[2] + 1));


    for(i = 0; i < 3* sizeof(int) - 3; i++)
    {
	printf(" the value @ address %p :  %d\n", (*p + i), *(*p + i));
    }
}
