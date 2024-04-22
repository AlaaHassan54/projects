#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"




//function to intialize the stack
void initialize_stack(Stack *ps)
{
    ps->top = -1;//(*ps).top = 0;
}



//function to check if the stack is full or not
bool isFull(Stack *ps)
{
 return (ps->top==MAXSIZE-1);
}



//function to check if the stack is empty or not
bool isEmpty(Stack *ps)
{
    return(ps->top==-1);
}



//function to add new items to the stack
void  Push(StackEntry data, Stack *ps)
{
   
    ps->entry[++(ps->top)]=data;
    
}




//function to remove the top of the stack
void Pop(Stack *ps,StackEntry *pe)
{   
   
   *pe=ps->entry[ps->top--];
   
}


//function to get the value of the top
int get_Top(Stack *ps,StackEntry *pe)
{   
    
    return ps->entry[ps->top];
   

}

//function to get the size of the stack
int Size(Stack *ps)
{
    return (ps->top)+1;
}

//function to clear the stack
void Clear(Stack *ps)
{
    ps->top=-1;
}

//function to print the elements
void Traverse(Stack *ps,void (*pf)(StackEntry))
{
    for(int i=ps->top;i>=0;i--)
    {
        (*pf)(ps->entry[i]);
    }
}

