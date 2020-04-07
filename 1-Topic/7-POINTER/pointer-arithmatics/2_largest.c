/*
title
*/


#include <stdio.h>



int main()
{
    //declare a variable
    int n, i;

    //promt the user to enter the n value
    printf("enter the n : ");

    //read the n value
    scanf("%d", &n);

    //declare an array of size n
    int a[n];

    //populate the array
    printf("enter %d items : ", n);

    for (i = 0 ; i < n; i++)
    {
	scanf("%d", a + i);
    }

    //logic
    int largest = *(a + 0);

    for (i = 1; i < n; i++)
    {
	if (largest < *(a + i))
	{
	    largest = *(a + i);
	}
    }


printf("largest is : %d\n", largest);

}
