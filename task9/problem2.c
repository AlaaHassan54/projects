#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    int i=0;
    while(s1[i]!='\0')
    {
        s2[i]=s1[i];
        i++;
    }
printf("%s\n%s",s1,s2);
}