#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
   char *ptr1=s1;
   char *ptr2=s2;
  while(*ptr1!='\0')
  {
    printf("%c", *ptr1);
    ptr1++;
  }
 printf(" ");

 while(*ptr2!='\0')
  {
    printf("%c", *ptr2);
    ptr2++;
  }
}