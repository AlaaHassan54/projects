#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int sum=0;
    while(num>0)
    {int mod=num%10;
sum=sum*10+mod;
num/=10;
    }printf("%d",sum);
}