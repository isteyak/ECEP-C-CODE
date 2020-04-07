
#include <stdio.h>

int partition(int *, int, int);
int swap(int *, int *);
int quick_sort(int *, int, int);

int main()
{
    int size;
    int i;
    printf("Enetr the number of element in array : ");

    scanf("%d", &size);

    int A[100];
    int start = 0, end = size  - 1;
    printf("Enter the %d element :", size);

    for(i = 0; i < size; i++)
    {
	scanf("%d", &A[i]);
    }
    printf("quick sort is : \n");


    quick_sort(A, start, end);

    for(i = 0; i < size; i++)
    {
	printf("%d , ", A[i]);
    }



}


int quick_sort(int *A, int start, int end)
{
    int pInd;
    if(start < end)
    {
	pInd = partition(A, start, end);
	quick_sort(A, start, pInd - 1);

	quick_sort(A, pInd + 1, end);
    }
}
