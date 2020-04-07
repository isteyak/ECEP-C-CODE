#include "sort.h"

int main()
{
    int elementArray[ARRAYSIZE];

    int totalElements, result;
    int choice, i = 0;
    char option;

    do
    {

	printf("Enter the option:\n");
	printf("1. create an array\n");	
	printf("2. mergeSort\n");
	printf("3. display array\n");

	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("Enter the total number of element to be inserted ain array: ");
		scanf("%d", &totalElements);

		for(i = 0; i < totalElements; i++)
		{
		    printf("%d: ", i);
		    scanf("%d", &elementArray[i]);
		}	


		break;
	    case 2: 
		result = mergeSort(elementArray, totalElements);
		//(result == SUCCESS)? printf("mergeSort SUCCESS\n"): printf("mergeSort FAILURE\n") ;

		//check the list for validating
		print_array(elementArray, totalElements);

		break;
	    case 3: 
		print_array(elementArray, totalElements);
		break;
	    default:
		printf("Invalid entry.\n");
		break;
	}

	/* check for continue */
	printf("Continue (y/n): ");
	scanf("\n%c", &option);

	if ( option == 'y' )
	{
	    continue;
	} else
	{
	    break;
	}

    } while (1);

    return 0;
}
