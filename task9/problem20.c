#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int freq[26]={0};
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65&&str[i]<=90)
        {
            freq[str[i]-65]++;
        }
        else if(str[i]>=97&&str[i]<=122)
        freq[str[i]-97]++;
        i++;
    }

for(int i=0;i<26;i++)
{if(freq[i]==0)continue;
    printf("%c=%d\n",i+97,freq[i]);
}
}