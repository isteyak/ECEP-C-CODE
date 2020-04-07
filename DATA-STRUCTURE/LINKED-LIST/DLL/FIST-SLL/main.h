#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#define FAILURE -1
#define SUCCESS 0

typedef int data_t;

typedef struct node
{
    data_t data;
    struct node *link;
}SList;

int insert_at_last(SList **, data_t);
int print_List(SList *head);
//int sl_delete_list(SList **head);

#endif
