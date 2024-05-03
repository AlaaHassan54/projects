#ifndef QUEUE_H
#define QUEUE_H

typedef int QueueEntry;

struct queuenode
{
    QueueEntry entry;
    struct queuenode *next;

}typedef QueueNode;

struct queue
{
  QueueNode *rear;
  QueueNode *front;
  int size;
}typedef Queue;



void inttialize_Queue(Queue *pq);
int inqueue(Queue *pq,QueueEntry e);
void dequeue(Queue *pq,QueueEntry *pe);
bool isEmpty(Queue *pq);
bool isFull(Queue *pq);
int Size(Queue *pq);
void Clear(Queue *pq);
void Traverse(Queue *pq,void (*pf)(QueueEntry));
void display(QueueEntry e);
int get_front(Queue *pq);

#endif