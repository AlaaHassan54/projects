#ifndef STACK_H
#define STACK_H

#define MAXSIZE 100
typedef int StackEntry;


struct stack
{
int top;
StackEntry entry[MAXSIZE];
}typedef Stack;

void initialize_stack(Stack *);
void Push(StackEntry, Stack *);
bool isFull(Stack *);
bool isEmpty(Stack *);
void Pop(Stack *,StackEntry *);
int get_Top(Stack *,StackEntry *);
int Size(Stack *);
void Clear(Stack *ps);
void Traverse(Stack *,void (*)(StackEntry));

#endif
