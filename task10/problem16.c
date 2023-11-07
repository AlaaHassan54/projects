#include <stdio.h>
#include <stdbool.h>
int main()
{
    char s[100];
    
    gets(s);
    char *ptr1=s;
    char *ptr2=s;
    while(*ptr1!='\0')
    {
        
        ptr1++;
    }
 ptr1--;
   while(ptr1>=ptr2)
   {
    printf("%c",*ptr1);
    ptr1--;
   }

}