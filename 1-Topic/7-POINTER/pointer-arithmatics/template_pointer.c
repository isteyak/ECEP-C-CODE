/*
title
*/


#include <stdio.h>



int main()
{
    //declare a variable
    int n;

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



    //print the array
    
    for (i = 0 ; i < n; i++)
    {
	printf("%d\t", *(a + i));
    }

    printf("\n");
}
