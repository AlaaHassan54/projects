#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include  "Queue.h"

//function to initialize the queue
void inttialize_Queue(Queue *pq)
{
 pq->rear = NULL;
 pq->front = NULL;
 pq->size = 0;
}



int inqueue(Queue *pq,QueueEntry e)
{
   QueueNode *pn=( QueueNode*)malloc(sizeof(QueueNode));

   if(!pn)return 0;
   else
   {
   pn->next = NULL;
   pn->entry = e; 

    if(!pq->rear)
    {
        pq->front=pn;
    }
    else 
    pq->rear->next=pn;  //>>>> run time error if the queue is empty
   
   pq->rear=pn;
   (pq->size)++;
   return 1;
   }
}


void dequeue(Queue *pq,QueueEntry *pe)
{
    QueueNode *temp=pq->front;
    *pe=temp->entry;
    pq->front=pq->front->next;
    free(temp);
    if(!pq->front)  // if we have only one node 
    pq->rear=NULL;
    (pq->size)--;
}
//rear and front must be null together

bool isEmpty(Queue *pq)
{
    return !pq->front;//!pq->front   !pq->size
}

bool isFull(Queue *pq)
{
    return 0;
}

int Size(Queue *pq)
{
    return pq->size;
}

void Clear(Queue *pq)
{
    while(pq->front)
    {
     pq->rear=pq->front->next;
     free(pq->front);
     pq->front=pq->rear;
    }
    pq->size=0;
}

void Traverse(Queue *pq,void (*pf)(QueueEntry))
{    
    QueueNode *pn=pq->front;
    for(;pn;pn=pn->next)
    (*pf)(pn->entry);
}

void display(QueueEntry e)
{
    printf("%d ",e);
}

int get_front(Queue *pq)
{
    return pq->front->entry;
}