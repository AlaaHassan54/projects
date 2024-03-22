#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node 
{
int data;
struct node *next;
struct node *prev;

};

void add_at_empty(struct node **head,int data);
void add_at_beg(struct node **head,int data);
void print(struct node *head);
void count_nodes(struct node *head);
void add_at_end(struct node *head,int data);
void add_at_pos(struct node **head,int data,int pos);
void create_list(struct node **head);
void delete_first_node(struct node **head);
void delete_last_node(struct node *head);
void delete_at_pos(struct node **head,int pos);
void reverse(struct node **head);

int main()
{
struct node *head=NULL;

create_list(&head);
print(head);
printf("\n");
reverse(&head);
print(head);



}


//add a node to empty linkedlist
void add_at_empty(struct node **head,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data = data;
    temp->next =NULL;
    temp->prev =NULL;
    *head = temp;

}


//add a node at beginning of list
void add_at_beg(struct node **head,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data = data;
    temp->next=*head;
    temp->prev=NULL;
    (*head)->prev=temp;
    *head = temp;
}


//print the data of linkedlist
void print(struct node *head)
{
    struct node *ptr=head;
    if(ptr==NULL)
    printf("\nlinkedlist is empty\n");

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}


//count nodes
void count_nodes(struct node *head)
{
    struct node *ptr=head;
    int c=0;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->next;
    }
    printf("\n%d\n",c);
}

//add a node at the end of the list
void add_at_end(struct node *head,int data)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    temp->prev=p;
}

//add node between two nodes
void add_at_pos(struct node **head,int data,int pos)
{
    struct node *temp=malloc(sizeof(struct node));
    temp->data=data;
    
    struct node*p=*head;
    if(pos==1)
    {
        add_at_beg(head,data);
        return ;
    }
    
      pos--;

    while(pos!=1)
    {   p=p->next;
        pos--;
    }


    if(p->next==NULL)
    {
     add_at_end(*head,data);
     return ;
    }

    else 
    {
    struct node *p2=p->next;
    temp->prev=p;
    temp->next=p2;
    p->next=temp;
    p2->prev=temp;
    }
 
}


//create a linkedlist
void create_list(struct node **head)
{
int n,data;
printf("enter the number of nodes: ");
scanf(" %d",&n);

if(n==0)
return ;

printf("enter the element of the node 1: ");
scanf(" %d",&data);
add_at_empty(head,data);

for(int i=1;i<n;i++)
{
    printf("enter the element of the node %d: ",i+1);
    scanf(" %d",&data);
    add_at_end(*head,data);
}
}

//delete the first node 
void delete_first_node(struct node **head)
{
    
    *head=(*head)->next;
    (*head)->prev=NULL;
    free( (*head)->prev);


}

//delete the last node
void delete_last_node(struct node *head)
{
    struct node* ptr = head;
    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *temp=ptr->prev;
    temp->next=NULL;
    free(ptr);
    ptr=NULL;
}

//delete node at specific position
void delete_at_pos(struct node **head,int pos)
{   
    if(pos==1)
    {
        delete_first_node(head);
        return ;
    }

    struct node *ptr=*head;
    while(pos>1)
    {  
        ptr=ptr->next;
        pos--;
    }

    if(ptr->next==NULL)
    {
        delete_last_node(*head);
        return ;
    }
    struct node *p=ptr->prev;
    p->next=ptr->next;
    ptr->next->prev=p;
    free(ptr);
    ptr=NULL;
}


//reverse linkedlist
void reverse(struct node **head)
{
    struct node *p1=*head;
    struct node *p2=p1->next;
    p1->next=NULL;
    p1->prev=p2;

    while(p2!=NULL)
    {
        p2->prev=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p2->prev;
    }
     *head=p1;

}