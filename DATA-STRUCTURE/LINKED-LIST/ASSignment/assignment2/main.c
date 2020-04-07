#include "slist.h"

int main()
{
    SLink *head = NULL;
    SLink *ahead = NULL;
    SLink *bhead = NULL;

    int data, a_data, result, index;
    int choice;
    char option;
    int aListElement, bListElement, i;

    do
    {

	printf("Enter the option:\n");
	printf("3. Insert After Element\n");	
	printf("4. Insert Before Element\n");	
	printf("7. Delete Element\n");
	printf("11. insert at Nth value\n");

	printf("Choice: ");
	scanf("%d", &choice);

	switch(choice)
	{
	    case 3: 
		printf("Enter the element after which you want to insert new data: ");
		scanf("%d", &a_data);
		printf("Enter the element to be inserted after the element %d: ", a_data);
		scanf("%d", &data);
		result = insert_after(&head, a_data, data);
		(result == SUCCESS)? printf("insert_after SUCCESS\n"): printf("insert_after FAILURE\n") ;
		if (result == NOELEMENT)
		{
		    printf("No such element found\n");
		}
		else if (result == EMPTYLIST)
		{
		    printf("List is empty\n");
		}
		break;
	    case 4: 
		printf("Enter the element before which you want to insert new data: ");
		scanf("%d", &a_data);
		printf("Enter the element to be inserted before the element %d: ", a_data);
		scanf("%d", &data);
		result = insert_before(&head, a_data, data);
		(result == SUCCESS)? printf("insert_before SUCCESS\n"): printf("insert_before FAILURE\n") ;
		if (result == NOELEMENT)
		{
		    printf("No such element found\n");
		}
		else if (result == EMPTYLIST)
		{
		    printf("List is empty\n");
		}
		break;
	    case 7:
		printf("Enter the element that needs to be deleted: ");
		scanf("%d", &data);
		result = delete_element(&head, data);
		(result == SUCCESS)? printf("delete_element SUCCESS\n"): printf("delete_element FAILURE\n") ;
		if (result == NOELEMENT)
		{
		    printf("No such element found\n");
		}
		else if (result == EMPTYLIST)
		{
		    printf("List is empty\n");
		}
		break;
	    case 11:
		printf("Enter the index value to insert the value [starts from 0]: ");
		scanf("%d", &index);	
		printf("Enter the element to be inserted at index %d: ", index);
		scanf("%d", &data);

		result = insert_Nth(&head, index, data);
		(result == SUCCESS)? printf("insert_Nth SUCCESS\n"): printf("insert_Nth FAILURE\n") ;

		if (result == NOELEMENT)
		{
		    printf("Index out of bound\n");
		}
		else if (result == EMPTYLIST)
		{
		    printf("List is empty\n");
		}

		break;

	    default:
		printf("Invalid entry.\n");
		break;
	}

	//check the list for validating
	print_list(head);

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
