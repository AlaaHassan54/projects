#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{int fl=0;
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int i=0;
   while(s1[i]!='\0'||s2[i]!='\0')
   {
    if(s1[i]>s2[i]){fl=1;break;}
    else if(s1[i]<s2[i]){fl=-1;break;}
    i++;
   }
 if(fl==1)
 {
printf("s2 is the least lexicographically");
 }
 else if(fl==-1)
 {
printf("s1 is the least lexicographically");

 }
 else 
 {
if(strlen(s1)==strlen(s2))printf("equal");
else 
{
    if(strlen(s1)>strlen(s2))printf("s2 is the least lexicographically");
    else printf("s1 is the least lexicographically");
}
 }
 }