#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char ch[100];
    gets(ch);
    int i=0;
    while(ch[i]!='\0')
    {if(ch[i]>=65&&ch[i]<=90)
        ch[i]=ch[i]+32;
        i++;
    }
    printf("%s",ch);
}