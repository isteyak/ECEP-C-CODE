#include "sort.h"


/*void quickSort(int array[], int low, int high)
{
    int i;

    if (low < high)
    {
	//to get the split value
	i = split(array, low, high);
	//quickSort left sub array
	quickSort(array, low, i-1);
	//quickSort right sub array
	quickSort(array, i+1, high);
    }			
}*/
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
   array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  // Index of smaller element 
int j;
    for (j = low; j <= high- 1; j++) 
    { 
	// If current element is smaller than or 
	// equal to pivot 
	if (arr[j] <= pivot) 
	{ 
	    i++;    // increment index of smaller element 
	    swap(&arr[i], &arr[j]); 
	} 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

/* The main function that implements QuickSort 
   arr[] --> Array to be sorted, 
   low  --> Starting index, 
   high  --> Ending index */
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
	/* pi is partitioning index, arr[p] is now 
	   at right place */
	int pi = partition(arr, low, high); 

	// Separately sort elements before 
	// partition and after partition 
	quickSort(arr, low, pi - 1); 
	quickSort(arr, pi + 1, high); 
    } 
} 
~/ECEP/Microcontrollers/Tools/tinybldlin/src/tinybldlin.py
