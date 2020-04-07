#include <stdio.h>

#include <stdlib.h>
#define R 3
#define C 3
int main()
{
    int **p = malloc(R * sizeof(int *));

    int i;

    for(i = 0; i < R; i++)
    {
	*(p + i) = malloc(C * sizeof(int));
	printf("the vlue @ address %p : %p\n", p + i, *(p + i));
    }
    printf("\n\n");

    for(i = 0; i < R; i++)
    {
	*(p[0] + i) = 10 * (i + 1);

	printf("the vlue @ address %p : %d\n", p[0] + i, *(p[0] + i));
    }
    printf("\n\n");
    
    for(i = 0; i < R; i++)
    {
	*(p[1] + i) =  (i + 1);

	printf("the vlue @ address %p : %d\n", p[1] + i, *(p[1] + i));
    }
    printf("\n\n");
}
