/*
Title 		:Program to find the median of two unsorted arrays
Author		:Isteyak
Organisation 	:Emertxe
Algoritham	:
		 //1.read the 1st array_A
		 //2.read the 2nd array_B
		 //3.merge the 1st and 2nd array into array_C
    		 //logic to merge the array_A and array_B
    		 for (k = 0; k < x; k++)
    		 {
		 if (k < num)
		 {
	     		array_C[k] = array_A[k];
		 }
		 else if (k > num-1)
	 	 {
	    		array_C[k] = array_B[l];
	  	        l = l + 1;
		 }
    		 }
    		 //4. logic to sort the merged array_C
    		 int temp;
    		 for (i = 0; i < (x - 1); i++)
    		 {
		 	for (j = 0; j < (x - 1 -i); j++)
			{
	    			if (array_C[j] > array_C[j+1])
	    			{
					temp = array_C[j];
					array_C[j] = array_C[j + 1];
					array_C[j + 1] = temp;
	    			}
		 	}	
	    	 }
		 //5. x = num + num1 (x is total length of merged array_c)
		 if (x % 2 != 0)//if the size of mrged sorted array_c is odd them print the middle element of the merged sorted array_c
                 {   
		     median = x / 2;
		     pf(arrayC[median])
		 }
		 else //if the size of merged array_c is even then sum the middle two elements of merged array_c and calculate avrage and print it
     	 	      //median_even = (array_C[median] + array_C[median-1]) / 2.0f;
                      //printf("%.2f  : is median\n", median_even);
*/

//inclusion of standard library
#include <stdio.h>


int main()
{
    //declaration of variable
    int num, num1;

    //0.promt the user to enter the 'n' value
    printf("Enter num value for array A : ");

    //0.0 scan the 'n' value
    scanf("%d", &num);

    //declaration of two array
    int array_A[num], array_B[num1];

    //2. promte the usr to enter the items
    printf("Enter the  items one by one for array A : ");

    //3. scan the items of array_A
    int i = 0, k;
    for (i = 0; i < num; i++)
    {
    	scanf("%d", &array_A[i]);
    
    }
    //promt the user to enter the size of array_B
    printf("Enter num1 value for array B : ");
    
    //read the size of array_B
    scanf("%d", &num1);
    
    //declaration of some used variable
    int x = num + num1;
    int median = x / 2;
    float median_even;
    
    //declaration of 3rd array_C
    int array_C[x],l = 0, j = 0;
    
    //promt the user to enter the size of array_B
    printf("Enter the  items one by one for array B : ");
    
    //scan the items of array_B
    for (i = 0; i < num1; i++)
    {
    	scanf("%d", &array_B[i]);
    }

    //logic to merge the array_A and array_B
    for (k = 0; k < x; k++)
    {
	if (k < num)
	{
	    array_C[k] = array_A[k];
	}
	else if (k > num-1)
	{
	    array_C[k] = array_B[l];
	    l = l + 1;
	}
    }
     
    //prints the merge unsorted array_C
    printf("unsorted array :  ");
    for (i = 0; i < x; i++)
    {
	printf("%d  ", array_C[i]);
    }

    //4. logic to sort the merged array_C
    int temp;
    for (i = 0; i < (x - 1); i++)
    {
	for (j = 0; j < (x - 1 -i); j++)
	{
	    if (array_C[j] > array_C[j+1])
	    {
		temp = array_C[j];
		array_C[j] = array_C[j + 1];
		array_C[j + 1] = temp;
	    }
	}
    }

    printf("\n");
    //5. print the sorted array_C
    printf("Sorted element is :"); 
    for (j =0; j < x; j++)
    {
    	printf("%d  ", array_C[j]);
    }
    printf("\n");
    
    //logic if the size of merged array_c is odd then print the middle element of the sorted merged array_c
    if ( x % 2 != 0)
    {
  	  printf("%d  : is median\n", array_C[median]);
    	  return 0;
    }
    else//logic if the size of merged array is even then add the middle two elements and calculate avr of that and print it
     	 median_even = (array_C[median] + array_C[median-1]) / 2.0f;
         printf("%.2f  : is median\n", median_even);

    return 0;
}


