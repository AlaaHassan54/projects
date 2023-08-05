#include <stdio.h>
#include <math.h>
int main()
{int num,dec=0;
 printf("enter the number: ");
    scanf("%d", &num);
    int i=0;
    while(num>0)
    {int mod=num%10;
    if(mod==1)dec+=pow(2,i);
    i++;
      num/=10;
    }
printf("%d",dec);
}