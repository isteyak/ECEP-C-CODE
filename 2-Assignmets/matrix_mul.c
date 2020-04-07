#include <stdio.h>

#define R 2
#define C 2

void print(int (*)[C]);
void populate(int (*p)[C]);
int (*(mul(int (*a)[C], int (*b)[C])))[C];
int main()
{
    int a[R][C];
    int b[R][C];
    populate(a);
    populate(b);


    int (*c)[C] = mul(a, b);
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

int (*(mul(int (*a)[C], int (*b)[C])))[C]
{

    int i, j, k, sum;
    static int c[R][C];
    for (i = 0; i < R; i++)
    {
	for (j = 0; j < C; j++)
	{
	    sum = 0;
	    for (k = 0; k < C; k++)
	    {

	    sum += (*(b[i] + j)) * (*(*(b + i) + j));
	    }
	    *(*(c + i) + j) = sum;
	}
    }
    return c;
}

void print(int (*p)[C])
{
    int i, j;
    for (i = 0; i < R; i++)
    {

	for(j = 0; j < C; j++)
	{
	    printf("c[%d][%d] = %d\t", i, j, *(*(p + i) + j));
	}
	printf("\n");
    }
    printf("\n");
}
