#include <stdio.h>

#define R 2
#define C 2

void print(int (*)[C]);
void populate(int (*p)[C]);
void add(int (*a)[C], int (*b)[C], int (*c)[C]);
int main()
{
    int a[R][C];
    int b[R][C];
    int c[R][C];
    populate(a);
    populate(b);
    add(a, b, c);
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

void add(int (*a)[C], int (*b)[C], int (*c)[C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    c[i][j] = *(b[i] + j) + *(*(a + i) + j);
	}
    }
}

void print(int (*p)[C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {
	printf("entered %d items for %d rows\n", C, i);

	for(j = 0; j < C; j++)
	{
	    printf("%d\t", *(*(p + i) + j));
	}
	printf("\n");
    }
    printf("\n");
}
