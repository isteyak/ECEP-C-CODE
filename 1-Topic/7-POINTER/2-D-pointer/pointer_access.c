
#include <stdio.h>

#define R 3
#define C 2

int main()
{
    int a[R][C] = {1,2,3,4,5,6};
    int j, i;

    int (*pa)[C] = a;
    int *np = (int *)pa;	

    for (i = 0; i < R; i++)
    {
//		int *np = pa[i];
//		int *np = (int *)pa;
	for (j = 0; j < C; j++, np++)
	{
	    printf("a[%d][%d]: %d\t", i, j, *np);
	}
	printf("\n");
    }
    printf("\n\n");
}    
