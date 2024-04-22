#ifndef STACK_H
#define STACK_H

typedef int StackEntry;

struct stacknode
{
 StackEntry entry;
 struct stacknode *next;
}typedef StackNode;

struct stack
{
StackNode *top;
int size;
}typedef Stack;

void initialize_stack(Stack *ps);
void Push(StackEntry data, Stack *ps);
void Pop(Stack *ps,StackEntry *pe);
int get_Top(Stack *ps);
bool isEmpty(Stack *ps);
bool isFull(Stack *ps);
void Clear(Stack *ps);
int Size(Stack *ps);
void Traverse(Stack *ps,void (*pf)(StackEntry));
#endif