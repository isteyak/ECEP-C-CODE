#include "slist.h"





int find_node(SLink *head, int val)
{
    SLink *temp;

    temp = head;
if(head == NULL)
{
    return EMPTYLIST;
}
else
{
    while(temp)
    {
	if(val ==  temp->data)
	{
	    return temp->data;
	
	}

	temp = temp->link;
    }

}
return FAILURE;

}
