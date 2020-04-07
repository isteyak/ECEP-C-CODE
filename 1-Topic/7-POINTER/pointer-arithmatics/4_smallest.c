/*
title
*/


#include <stdio.h>
#include <stdlib.h>


int main()
{
    //declare a variable
    int n, i;

    //promt the user to enter the n value
    printf("enter the n : ");

    //read the n value
   scanf("%d", &n);

    //declare an array of size n
    
    
    //int a[n];

    int *a = malloc(n * sizeof(int));

    //populate the array
    printf("enter %d items : ", n);

    for (i = 0 ; i < n; i++)
    {
	scanf("%d", a + i);
    }

    //logic
    int smallest = *(a + 0);

    for (i = 1; i < n; i++)
    {
	if (smallest > *(a + i))
	{
	    smallest = *(a + i);
	}
    }


printf("smallest is : %d\n", smallest);

}
