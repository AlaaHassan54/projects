#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include  <stdbool.h>
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


//function to intialize the stack
void initialize_stack(Stack *ps)
{
    ps->top = NULL;
    ps->size=0;
}


//function to add new items to the stack
int Push(StackEntry data, Stack *ps)
{
    
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    if(!pn)return 0;
    else {
    pn->entry=data;
    pn->next=ps->top;
    ps->top=pn;
    (ps->size)++;
    return 1;
    }
}


//function to remove the top of the stack
void Pop(Stack *ps,StackEntry *pe)
{   
    
     *pe=ps->top->entry;
      StackNode *pn=ps->top;
      ps->top=ps->top->next;
      free(pn);
      (ps->size)--;
     
}


//function to get the value of the top
int get_Top(Stack *ps)
{   
    
    return ps->top->entry;
    

}


//function to check if the stack is empty or not
bool isEmpty(Stack *ps)
{
    return(ps->top==NULL);
}


//function to check if the stack is full or not
bool isFull(Stack *ps)
{
 return false;
}


//function to clear the stack
 void Clear(Stack *ps)
{
   StackNode *pn=ps->top;
   while(pn)
   {
    pn=pn->next;
    free(ps->top);
    ps->top=pn;
   }
  ps->size=0;
}


//function to get the size of the stack
int Size(Stack *ps)
{
    return ps->size;
}


//function to print the elements
void Traverse(Stack *ps,void (*pf)(StackEntry))
{
     StackNode *pn=ps->top;
     while(pn)
     {
        (*pf)(pn->entry);
        pn=pn->next;
     }
  
}





int main() {

    Stack A,B;
    initialize_stack(&A);
    initialize_stack(&B);   
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int que;
    scanf("%d",&que);
    if(que == 1)
    {
     int x;
     scanf("%d",&x);
     Push(x,&A);
    }
    else if(que == 2)
    {
        StackEntry r;
     if(!isEmpty(&B))
     { 
        Pop(&B,&r);
     }
     else
     {
       while(!isEmpty(&A))
       {
        StackEntry e;
        Pop(&A,&e);
        Push(e,&B);
       }
       Pop(&B,&r);
     }
    }
    else
    {
     if(!isEmpty(&B))
     {
        printf("%d\n",get_Top(&B));
     }
     else 
     {
        while(!isEmpty(&A))
       {
        StackEntry e;
        Pop(&A,&e);
        Push(e,&B);
       }
        printf("%d\n",get_Top(&B));
     }
    }
  }
    
}
