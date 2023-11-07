#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s[100];
   char *ptr=s;
    gets(s);
    int c=0;
    while(*ptr != '\0')
    {
        c++;
        ptr++;
    }
     printf("%d",c);
}