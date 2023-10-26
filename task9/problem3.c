#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    char s3[200];
    int i=0;
    while(s1[i]!='\0')
    {
        s3[i]=s1[i];
        i++;
    }int j=0;
    while(s2[j]!='\0')
    {
        s3[i]=s2[j];
        i++;j++;
    }
    s3[i]='\0';
    printf("%s",s3);
}