#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include  "Queue.h"

int main()
{
    Queue q;
    inttialize_Queue(&q);
    printf("enter the size:");
    int s;
    scanf("%d",&s);

    for(int i=0;i<s;i++)
    {   int x;
       printf("enter the element: ");
        scanf(" %d",&x);
        inqueue(&q,x);
    }

    Traverse(&q,&display);
    printf("\n");
    
    int i=1;
    while(!isEmpty(&q))
    {
         QueueEntry e;
         dequeue(&q,&e);
         printf("queue after removing %d elements: ",i);
        Traverse(&q,&display);
        printf("\nthe front element is:");
        printf("%d",get_front(&q));
        printf("\n");
       i++;
    }

}

