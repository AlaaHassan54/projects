#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "stack.h"

void Display(StackEntry e);

int main()
{

Stack s;
initialize_stack(&s);

int size;
printf("enter the size of the stack:");
scanf("%d", &size);

printf("enter the elements:\n" );
for(int i=0;i<size;i++)
{   int x;
    scanf(" %d",&x);
    Push(x,&s);
}

printf("the size is:%d\n",Size(&s));
printf("the elemennts is\n");
Traverse(&s,&Display);

 if(!isEmpty(&s))
 printf("\nstack is not empty\n");
 else 
 printf("stack is empty\n");

int j=1;

 while(!isEmpty(&s))
 {
    StackEntry e;
   Pop(&s,&e);
   printf("\nstack after removing %d element:\n",j++);
   Traverse(&s,&Display);
}

}

void Display(StackEntry e)
{
    printf("%d ",e);
}
