#ifndef QUEUE_H
#define QUEUE_H



#define MAXSIZE 100
typedef int  QueueEntry;


struct queue 
{
 int front;
 int rear;
 int size;
 QueueEntry entry[MAXSIZE];
}typedef Queue;

void inttialize_Queue(Queue *pq);
void inqueue(Queue *pq,QueueEntry data);
void dequeue(Queue *pq,QueueEntry *pe);
bool isEmpty(Queue *pq);
bool isFull(Queue *pq);
int Size(Queue *pq);
void clearQueue(Queue *pq);
void Traverse(Queue *pq,void (*pf)(QueueEntry));
void display(QueueEntry e);
int get_front(Queue *pq);

#endif