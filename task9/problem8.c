#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int i=0,alpha=0,digits=0,sp_char=0;
    while(str[i]!='\0')
    {if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
    alpha++;
    else if(str[i]>=48&&str[i]<=57)
    digits++;
    else sp_char++;
    i++;
    }
    printf("alpabets=%d\ndigits=%d\nspecialcharacters=%d\n",alpha,digits,sp_char);

}