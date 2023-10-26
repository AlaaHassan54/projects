#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    gets(s1);
    gets(s2);
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        if(s1[i]==s2[0])
        {int t=0,fl=1;
            while(s2[t]!='\0')
            { if(s1[i+t]!=s2[t]){fl=0;break;}
            t++;    
            }
             if(fl){printf("%d",i);return 0;}
        }
      
       i++;
    }

}