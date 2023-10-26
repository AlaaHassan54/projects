#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char ch[100];
    gets(ch);
    int i=0,l=0;
    while(ch[i]!='\0')
    {l++;
    i++;
    }
    printf("%d\n",l);
}