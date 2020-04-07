

#include "main.h"


int print_List(SList *head)
{
    if(head == NULL)
    {
	printf("List is empty\n");
	return FAILURE;
    }

    SList *temp = head;

    while(temp)
    {
	printf("%d ", temp->data);
	temp = temp->link;
    }

    printf("\n");

    return SUCCESS;
}
