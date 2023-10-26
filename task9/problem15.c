#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
  char ch= getchar();
    int i=0,t=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch){t=i;}
        i++;
    }
    printf("%d\n",t);
}