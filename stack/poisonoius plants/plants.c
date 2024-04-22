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
 * Complete the 'poisonousPlants' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY p as parameter.
 */
 
/************************************************code**************************************************/
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
int get_Top(Stack *ps)
{   
  
   return  ps->top->entry;
   

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

void Display(StackEntry e)
{
    printf("%d ",e);
}




int poisonousPlants(int p_count, int* p) {
int no_days[p_count];

for(int i=0;i<p_count;i++)
no_days[i]=0;


int mini=p[0];
int maxi=0;

Stack s;
initialize_stack(&s);
Push(0,&s);

for(int i=1;i<p_count;i++)
{
    if(p[i]>p[i-1])
    no_days[i]=1;
    
    if(mini>p[i])mini=p[i];
    
    while(!isEmpty(&s)  &&  p[get_Top(&s)]>=p[i])
    {
        if(p[i]>mini)
        {
           if(no_days[i]<no_days[get_Top(&s)]+1)
           {
               no_days[i]=no_days[get_Top(&s)]+1;
           } 
        }
        StackEntry r;
        Pop(&s, &r);
    }
    maxi=maxi>no_days[i]?maxi:no_days[i];
    Push(i, &s);
}
return maxi;
}





/************************************************code**************************************************/

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int n = parse_int(ltrim(rtrim(readline())));

    char** p_temp = split_string(rtrim(readline()));

    int* p = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int p_item = parse_int(*(p_temp + i));

        *(p + i) = p_item;
    }

    int result = poisonousPlants(n, p);

    fprintf(fptr, "%d\n", result);

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
