#include "main.h"



int main()
{
    SList *head = NULL;

    insert_at_last(&head, 6);
    insert_at_last(&head, 5);
    insert_at_last(&head, 4);
    insert_at_last(&head, 8);

    print_List(head);

    return SUCCESS;
}
