#include "queue.h"

int dequeue(Queue *Q, data_t *data)
{
    //check for Queue empty
    if ( ( ((Q -> front) == -1) && ((Q -> rear) == -1) ))
    {
	return QEMPTY;
    
    }
    if(Q -> rear == Q -> front)
    {
	Q -> rear = Q -> front = -1;

	return SUCCESS;
    }
    //get the data and return the value in data
    (*data) = Q -> Qarray[Q -> front];
    //increment the front pointer to valid queque front by incrementing by 1
    (Q -> front) = ((Q -> front + 1) % QSIZE);

    return SUCCESS;
}
