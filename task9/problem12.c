#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    gets(s1);
    int size=strlen(s1)-1;
   int l=0,r=size;
while(l<=r)
{
    if(s1[l]==s1[r]){l++;r--;}
    else {printf("not palindrome");return 0;}
}
printf("palindrome");
}
