#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'waiter' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY number
 *  2. INTEGER q
 */

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
 

 /********************************code************************************/
 #define MAXSIZE 100002
 bool notprime[MAXSIZE]={false};
 int primes[MAXSIZE];
 void seive()
 {
 int j=1;
 for(int i=2;i<=MAXSIZE;i++)
 {
     if(!notprime[i])
     {
         primes[j++]=i;
         for(int k=i*2;k<=MAXSIZE;k+=i)
         {
             notprime[k]=true;
         }
     }
 }
 }
 


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
void Push(StackEntry data, Stack *ps)
{
   
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=data;
    pn->next=ps->top;
    ps->top=pn;
    (ps->size)++;
   
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
void get_Top(Stack *ps,StackEntry *pe)
{   
    
    *pe=ps->top->entry;
    

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



 

int* waiter(int number_count, int* number, int q, int* result_count) {
seive();
Stack A,B;
initialize_stack(&A);
initialize_stack(&B);

*result_count=number_count;
int *temp=malloc(number_count*sizeof(int));
int *res=malloc(number_count*sizeof(int));
int *te=res;

for(int i=0;i<number_count;i++)
{
    Push(number[i], &A);
}

int k=1,j=0;
while(q-- )
{   
    if(isEmpty(&A))break;
    int c=0,j=0;
     memset(temp, 0, number_count * sizeof(int));
    while(!isEmpty(&A))
    {  
         StackEntry e;
        get_Top(&A,&e);
        if(e%primes[k]==0)
        {
            Push(e,&B);
           
        }
        else
        {
           c++;
            temp[j++]=e;
        }
        Pop(&A,&e);
    }
   
    while(!isEmpty(&B))
    {
        StackEntry e;
         Pop(&B,&e);
        *te=e;
        te++;
       
    }
     
     
    for(int i=0;i<c;i++)
    {
        Push(temp[i],&A);
    }
     k++;
}
while(!isEmpty(&A))
{
    StackEntry e;
    Pop(&A,&e);
    *te=e;
    te++;
}
free(temp);
Clear(&A);
Clear(&B);

return res;
}
 /********************************code************************************/








int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** first_multiple_input = split_string(rtrim(readline()));

    int n = parse_int(*(first_multiple_input + 0));

    int q = parse_int(*(first_multiple_input + 1));

    char** number_temp = split_string(rtrim(readline()));

    int* number = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int number_item = parse_int(*(number_temp + i));

        *(number + i) = number_item;
    }

    int result_count;
    int* result = waiter(n, number, q, &result_count);

    for (int i = 0; i < result_count; i++) {
        fprintf(fptr, "%d", *(result + i));

        if (i != result_count - 1) {
            fprintf(fptr, "\n");
        }
    }

    fprintf(fptr, "\n");

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
