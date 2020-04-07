#include "queue.h"

void print_queue(Queue Q)
{
    int i;

    if(Q.front == -1 && Q.rear == -1)
    {
	printf("QUEUE IS EMPATY\n");

	return QEMPTY;
    }

    int temp = Q.front;
do
{
    printf("%d ", Q.Qarray[temp]);
    temp = ((temp + 1) % QSIZE);
}while(temp != ((Q.rear + 1) % QSIZE));
    //print the values present from front till rear in the queue
    /*for(i = Q.front; i <= Q.rear; i++)
    {
	printf("%d ", Q.Qarray[i]);

    }*/
    printf("\n");
}
