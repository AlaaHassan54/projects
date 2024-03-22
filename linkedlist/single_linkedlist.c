#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
int data;
struct node *link;
};


void count_nodes(struct node *head);
void print(struct node *head);
void add_at_end(struct node **ptr,int val);
void add_at_beg(struct node **head,int val);
void add_at_pos(struct node *head,int val,int pos);
void delete_first_node(struct node **head);
void delete_last_node(struct node *head);
void delete_at_pos(struct node **head,int pos);
void delete_linkedlist(struct node **head);
void reverse_linkedlist(struct node **head);


int main()
{
// struct node *head=NULL;
// head=malloc(sizeof(struct node));
// head->data=45;
// head->link=NULL;


// struct node *current=NULL;
// current=malloc(sizeof(struct node));
// current->data=55;
// current->link=NULL;
// head->link=current;

// current=malloc(sizeof(struct node));
// current->data=99;
// current->link=NULL;
// head->link->link=current;


// add_at_end(head,33);
// count_nodes(head);
// print(head);

//#############################################################
//another way to create a linkedlist from scratch
struct node *head=NULL;
head=malloc(sizeof(struct node));
head->data=45;
head->link=NULL;


struct node *ptr=head;
add_at_end(&ptr,62);
add_at_end(&ptr,12);
add_at_end(&ptr,17);


add_at_pos(head,-5,3);
add_at_beg(&head,20);  //note here we are passing the value not the refrence  add_at_beg(head,20); 

//delete_first_node(&head);
//delete_last_node(head);


delete_at_pos(&head,4);

count_nodes(head);
print(head);
printf("\n");
reverse_linkedlist(&head);
print(head);

}



//print the number of nodes
void count_nodes(struct node *head)
{
    if(head==NULL)
    printf("linked list is empty");

    int c=0;
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        c++;
        ptr=ptr->link;
    }
    printf("\n%d \n",c);
}


//print the data
void print(struct node *head)
{
if(head==NULL)
   printf("linked list is empty");

   struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}


//adding node at the end
void add_at_end(struct node **ptr,int val)
{
     struct node *temp=NULL;
     temp=malloc(sizeof(struct node));

     temp->data=val;
     temp->link=NULL;

    (*ptr)->link=temp;
    *ptr=temp;
}


//adding node at the beginning
void add_at_beg(struct node **head,int val)
{
     struct node *temp=NULL;
     temp=malloc(sizeof(struct node));
     temp->data=val;
     temp->link=*head;
    *head=temp;
    
}


//inserting a node at certain position 
void add_at_pos(struct node *head,int val,int pos)
{
    struct node *ptr=head;
    struct node *ptr2=malloc(sizeof(struct node));
    ptr2->data=val;
    ptr2->link=NULL;
    pos--;
    while(pos!=1)
    {
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;

}

//delete the first node 
void delete_first_node(struct node **head)
{   

    if(head==NULL)
    printf("linked list is empty");
    else 
    {
    struct node *temp=*head;
    *head=(*head)->link;
    free(temp);
    temp=NULL;
    }
}


//delete last node 
void delete_last_node(struct node *head)
{
    if(head==NULL)
    printf("linked list is empty");

    else if(head->link==NULL) 
    {
      free(head);
      head=NULL;
    }

    else 
    {
        struct node *temp=head;
       

        while(temp->link->link!=NULL)
        {
            
            temp=temp->link;
        }
         
         free(temp->link);
         temp->link=NULL;   
        
    }
   
}


//delete node at certain position 
void delete_at_pos(struct node **head,int pos)
{


    struct node *prev=*head;
    struct node *curr=*head;


  if(*head==NULL)
  printf("linked list is empty");

  
  else if(pos==1)
  {
     *head=curr->link;
      free(curr);
      curr=NULL;
  }
  else 
  {
    
    while(pos!=1)
    {   prev=curr;
        curr=curr->link;
        pos--;
    }
   prev->link=curr->link;
   free(curr);
   curr=NULL;
  }
}


//delete the whole linked list

void delete_linkedlist(struct node **head)
{  
    struct node *temp=*head;
     
    if(*head==NULL)
    printf("linked list is empty");
    else 
    {
      while(temp!=NULL)
      {
        temp=temp->link;
        free(*head);
        *head=temp;
      }
    }
}

//reverse likedlist
void reverse_linkedlist(struct node **head)
{
    struct node *prev=NULL;
    struct node *next=NULL;
    while(*head!=NULL)
    {
        next=(*head)->link;
        (*head)->link=prev;
        prev=*head;
        *head=next;
    }
       *head=prev;
}

//29
//single linkedlist>>>> forward only 
//doubly linkedlist>>>forward and backward
//circular linkedlist>>>last element connected to the first one 
//selfrefrential structure >>> structure which contains pointer to a structure of the same type
//traversing the linkedlist take o(n)(print data and count nodes)
//counting element of array o(1) but printing data take o(n)
//inserting element at the end of the linkedlist or at the beginning takes o(1)
//inserting element at the beginning of array takes o(n)
//inserting element at a certain position of  linkedlist  o(n)
//inserting element at a certain position of  array o(n)
/*check (ptr!=NULL)  >>> ptr will point to the null node so after the loop the value will be 0
check (ptr->link=NULL) >>>ptr will store the value of the last node 
so when you use (ptr->link=NULL) for count or print data it doesnot print or count the data of the last node 
becuase the loop end before he enter the iteration of the last node */
//we can delet the last node using only one pointer
//deleting the last node for linkedlist takes o(n)
//deleting the last element for array takes o(1)
//deleting the first node for linkedlist takes o(1)
//deleting the first element for array takes o(n)