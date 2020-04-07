/*
Tittle: Float array
Author: isteyak
Organization: Emertxe
Description:Read the float elements from user and store them into an array.
Run a loop for printing the float elements in sorted order.
Algo:
        		for (int pass = 0; pass < n; pass++)
			float small= *a;
			//here calculating largest value of array
			for (int iter = 0; iter < n; iter++)
				if (small < *(a+iter))
					small = *(a+iter);
			if(count == 0)//here calculating smallest value of float array
			for (int iter = 0; iter < n; iter++)
				if (small > *(a+iter)
					small = *(a+iter);
			temp = small;
			count++;
			else
			for (int iter = 0; iter < n; iter++)
				if (small > *(a+iter) && *(a+iter) > temp)//here condition to get 2nd, 3rd. ..... smallest in the float array
					small = *(a+iter);
			temp = small;
			printf("%g\t", temp);
*/

//inclusion Header file 
#include<stdio.h>
#include<stdlib.h>
void float_sort(float *, int);
//start main program
int main()
{
	system("clear");
	    
	    //Declaration of variable
		char option;
	do
	{
		//declration of variable
		int n;

		//prompt the user to enter the float number
		printf("Enter the num of element ");
		scanf("%d", &n);

		//populating array
        float a[n];
        printf("Enter '%d' element of array: ", n);
	int pass;
        for (pass = 0; pass < n; pass++)
		{
			scanf("%f", &a[pass]);
		}
		
		//call function
        float_sort(a, n);

		printf("want to continue... Press[yY|nN]");
		scanf("\n%c", &option);
	}while( option == 'Y' | option == 'y');	
}
void float_sort(float *a, int n)
{
	float small, temp, large;
	//for execution of one time
	static int count=0;
	printf("sorted array: ");
	//for printing n time
	int pass;
    for (pass = 0; pass < n; pass++)
	{
		float small= *a;
		//small should be greatest number of array
		int iter;
		if (pass == n -1)
		{
		    for (iter = 0; iter < n; iter++)
		{
			if (small < *(a+iter))
			{
				large = *(a+iter);
			}

		}
		printf("%g\t", large);
		}
		//for one time execution and assigning temp value
	else if(count == 0)
		{
			for (iter = 0; iter < n; iter++)
			{
				if (small > *(a+iter))
				{
					small = *(a+iter);
				}
			}
			temp = small;
			count++;
			printf("%g\t", temp);
		}
		else
		{
			//for printing temp value
			for (iter = 0; iter < n; iter++)
			{
				//number should be greater than smallest number of array and less than the remaining .
				if (small > *(a+iter) && *(a+iter) > temp)
				{
					small = *(a+iter);
				}
			}
			temp = small;
			printf("%g\t", temp);

		}
	}
	printf("\n");	
}
