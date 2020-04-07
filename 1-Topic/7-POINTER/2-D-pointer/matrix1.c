#include <stdio.h>

#define R 2
#define C 2

void print(int (*)[C]);
void populate(int (*p)[C]);
int (*(add(int (*a)[C], int (*b)[C])))[C];
int main()
{
    int a[R][C];
    int b[R][C];
    populate(a);
    populate(b);


    int (*c)[C] = add(a, b);
    print(c);

}

void populate(int (*p)[C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
	printf("enter %d items for %d rows\n", C, i);

	for(j = 0; j < C; j++)
	{
	    scanf("%d", *(p + i) + j);
	}
    }
}

int (*(add(int (*a)[C], int (*b)[C])))[C]
{
    int i, j;
    static int c[R][C];
    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    c[i][j] = *(b[i] + j) + *(*(a + i) + j);
	}
    }
    return c;
}

void print(int (*p)[C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
	printf("entered %d items for %d rows\n", C, i);

	for(j = 0; j < C; j++)
	{
	    printf("c[%d][%d] = %d\t", i, j, *(*(p + i) + j));
	}
	printf("\n");
    }
    printf("\n");
}
