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

int parse_int(char*);


/************************************code*********************************************/
 typedef char StackEntry;

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


//function to intialize the stack
void initialize_stack(Stack *ps)
{
    ps->top = NULL;
    ps->size=0;
}


//function to add new items to the stack
int Push(StackEntry data, Stack *ps)
{
    if(!isFull(ps))
    {
    StackNode *pn=(StackNode*)malloc(sizeof(StackNode));
    pn->entry=data;
    pn->next=ps->top;
    ps->top=pn;
    (ps->size)++;
    return 1;
    }
    else 
    return 0;
}


//function to remove the top of the stack
int Pop(Stack *ps,StackEntry *pe)
{   
    if(!isEmpty(ps))
    {
     *pe=ps->top->entry;
      StackNode *pn=ps->top;
      ps->top=ps->top->next;
      free(pn);
      (ps->size)--;
      return 1;
    }
    else 
    return 0;
}

int get_Top(Stack *ps,StackEntry *pe)
{   
    if(!isEmpty(ps))
    {
    *pe=ps->top->entry;
    return 1;
    }
    else 
    return 0;

}
 
char* isBalanced(char* s) {
    int i=0;
    Stack st;
    char *out=NULL;
    initialize_stack(&st);
while(s[i]!='\0') 
{ 
     if(s[i]=='(')
   {Push(')',&st);}
   
   else if(s[i]=='[')
   {Push(']',&st);}
   
   else if(s[i]=='{')
   {Push('}',&st);}
   
   else 
   {  
       StackEntry e;
       get_Top(&st,&e);
       if(!isEmpty(&st) && s[i]==e)
       {
           Pop(&st,&e);
       }
       else
       {
        out="NO";
        return out;
       }
   }
   i++; 
}

if(!isEmpty(&st))
{
    out="NO";
    return out;
}
else 
{
    out="YES";
    return out;
}

}

/************************************code*********************************************/



int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int t = parse_int(ltrim(rtrim(readline())));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char* s = readline();

        char* result = isBalanced(s);

        fprintf(fptr, "%s\n", result);
    }

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

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
