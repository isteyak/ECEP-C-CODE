#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

typedef struct node
{
    int data;
    struct node *link;
}slist;

int append(slist **head, int data);
int print_list(slist *head);

int mid_list(slist *head);
void main()
{
    char c;
    int i, ret;
    int data, choice;
    slist *head = NULL;
    do
    {
	printf("1 append element in node \n 2. find mid \n 3. print node\n");

	scanf("%d", &choice);

	switch(choice)
	{
	    case 1:
		printf("ENter the data to ppend\n");
		scanf("%d", &data);
		ret =  append(&head, data);
		print_list(head);
		break;

	    case 2:

		mid_list(head);

		break;
	}
	printf("enter y to repeat :");
	scanf("\n%c", &c);
    }while( c == 'y');
}

int append(slist **head, int data)
{
    slist *temp = *head;

    slist *new = malloc(sizeof(slist));

    new->data = data;
    new->link = NULL;

    if(*head == NULL)
    {
	*head = new;

	return 1;

    }
    else
    {
	while(temp->link)
	{
	    temp = temp->link;
	}

    }

    if(temp->link == NULL)
    {
	temp->link = new;

	return 1;
    }
}

int print_list(slist *head)
{
    slist *temp = head;

    while(temp)
    {
	printf("%d, ", temp->data);

	temp =  temp->link;
    }
}
int mid_list(slist *head)
{
    slist *temp = head;
    int count=1;

    if(head == NULL)
    {
	printf("empty list\n");
    }

    slist *slow = temp;
    slist *fast = temp;

    while(fast != NULL && fast->link != NULL)
    {
	fast = fast->link->link;
	slow = slow->link;
	count++;
    }
    printf("count = %d middle elemnt %d \n", count, slow->data);
}
