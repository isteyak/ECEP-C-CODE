#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define EMPTYLIST -2
#define NOELEMENT -3

typedef int data_t;
typedef struct snode
{
    	data_t data;
		struct snode *link;
}SLink;

/* prints the elements in the list
 */
 void print_list(SLink *);

 /* insert a node at the first
  */
  int insert_at_first(SLink **, data_t);

  /* insert a node in the last of the list
   */
   int insert_at_last(SLink **, data_t);

