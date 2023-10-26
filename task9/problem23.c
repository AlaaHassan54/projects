#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    char c=getchar();
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        if(s1[i]!=c)
       {s2[j]=s1[i];j++;}
        i++;
    }
    printf("%s",s2);
}
