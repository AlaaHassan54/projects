#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    int i=0;
   while(str1[i]=='\t'||str1[i]=='\n'||str1[i]==' ')
   {
    i++;
   
   }
  if(i!=0)
   {
    int j=0;
    while(str1[j+i]!='\0')
    {
        str2[j]=str1[j+i];
        j++;
    }
    str2[j]='\0';
   }
   printf("%s",str2);
}