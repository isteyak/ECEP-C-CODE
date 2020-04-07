#include <stdio.h>

#define R 3
#define C 2

int main()
{
    int a[R][C] = {1,2,3,4,5,6};
    int j, i;
    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    printf("a[%d][%d]: %d\t", i, j, a[i][j]);
	}
	printf("\n");
    }
    printf("\n\n");
    
    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    printf("a[%d][%d]: %d\t", i, j, *(a[i]+j));
	}
	printf("\n");
    }

    printf("\n\n");

    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    printf("a[%d][%d]: %d\t", i, j, *(*(a + i) + j));
	}
	printf("\n");
    }
    
    printf("\n\n");

    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    printf("a[%d][%d]: %d\t", i, j, (*(a + i))[j]);
	}
	printf("\n");
    }

}
