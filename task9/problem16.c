#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
  char ch= getchar();
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==ch){printf("%d ", i);}
        i++;
    }
}