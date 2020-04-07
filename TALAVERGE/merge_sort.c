#include <stdio.h>




int merge(int *a, int l, int r);
int merge_sort(int a[], int l, int r);


int main()
{
    int a[100];
    int n, i;
    printf("enter the no of element to be added in array : ");
    scanf("%d", &n);
    printf("Enter the %d element ", n);
    for(i = 0; i < n; i++)
    {
	scanf("%d", &a[i]);
    }

    merge_sort(a, 0, n-1);

    for(i = 0; i < n; i++)
    {
	printf("%d, ", a[i]);
    }

}
int merge_sort(int a[], int l, int r)
{

    if(l >= r)
    {
	return 0;
    }
    int mid = (l + r) / 2;



    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);

    merge(a, l, r);
}

int merge(int *a, int l, int r)
{
    int mid = (l + r) / 2;

    int i = l;
    int j = mid+1;
    int k = l;

    int temp[100];

    while(i <= mid && j <= r)
    {
	if(a[i] < a[j])
	{
	    temp[k++] = a[i++];
	}
	else
	{
	    temp[k++] = a[j++];
	}
	
    }
    while(i <= mid)
    {
	temp[k++] = a[i++];
    }

    while(j <= r)
    {
	temp[k++] = a[j++];
    }

    for(i = l; i < r; i++)
    {
	a[i] = temp[i];
    }
}
