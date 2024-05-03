#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"



//intialize queue
void inttialize_Queue(Queue *pq)
{
pq->front = 0;
pq->rear= -1;
pq->size=0;
}


//pushing element in queue
void inqueue(Queue *pq,QueueEntry data)
{   
    pq->rear=((pq->rear)+1)%MAXSIZE;
    pq->entry[pq->rear]=data;
    pq->size++;
}


//removing the element from queue
void dequeue(Queue *pq,QueueEntry *pe)
{
    *pe=pq->entry[pq->front];
    pq->front=(pq->front+1)%MAXSIZE;
    pq->size--;
}


//check if the queue is empty or not
bool isEmpty(Queue *pq)
{
    return !pq->size;
}

//check if the queue is full or not
bool isFull(Queue *pq)
{
    return (pq->size==MAXSIZE);
}



//size of the queue
int Size(Queue *pq)
{
    return pq->size;
}


//clear the queue
void clearQueue(Queue *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

void Traverse(Queue *pq,void (*pf)(QueueEntry))
{

int s=0;
for(int pos=pq->front;s<pq->size;s++)
{   
    (*pf)(pq->entry[pos]);
    pos=(pos+1)%MAXSIZE;
}
}



int get_front(Queue *pq)
{
    return pq->entry[pq->front];
}

//append >>> inqueue
//retreve >>> dequeue