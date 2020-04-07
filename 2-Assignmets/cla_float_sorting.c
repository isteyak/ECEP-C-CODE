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
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void float_sort(char **, int);
//start main program
int main(int argc, char *argv[])
{
	system("clear");
	    
	    //Declaration of variable
		char option;
	do
	{
            float_sort(argv, argc);

		printf("want to continue... Press[yY|nN]");
		scanf("\n%c", &option);
	}while( option == 'Y' | option == 'y');	
}
void float_sort(char **a, int n)
{
	double small, temp, large;
	//for execution of one time
	static int count=0;
	printf("sorted array: ");
	//for printing n time
	int pass;
    for (pass = 1; pass < n; pass++)
	{
		small= atof(*(a+1));


		//small should be greatest number of array
		int iter;
		    for (iter = 1; iter < n; iter++)
			{
			if (small < atof(*(a+iter)))
			{
				small = atof(*(a+iter));
			}

		}
//		printf("%lf\t", small);
		//for one time execution and assigning temp value
	 if(count == 0)
		{
			for (iter = 1; iter < n; iter++)
			{
				if (small > atof(*(a+iter)))
				{
					small = atof(*(a+iter));
				}
			}
			temp = small;
			count++;
			printf("%lf\t", temp);
		}
		else
		{
			//for printing temp value
			for (iter = 1; iter < n; iter++)
			{
				//number should be greater than smallest number of array and less than the remaining .
				if (small > atof(*(a+iter)) && atof(*(a+iter)) > temp)
				{
					small = atof(*(a+iter));
				}
			}
			temp = small;
			printf("%lf\t", temp);

		}
	
	}
	printf("\n");
}


