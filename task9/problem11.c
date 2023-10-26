#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    int size=strlen(s1);
    int j=size-1,i=0;
    for(i=0;i<size;i++)
    {s2[i]=s1[j];
    j--;  
    }
    s2[i]='\0';
printf("%s",s2);
}