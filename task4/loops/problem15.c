#include <stdio.h>
int main()
{
    int num,mal=1;
    printf("enter the number: ");
    scanf("%d", &num);
    while(num>0)
    {mal*=num%10;
    num/=10;
    }printf("%d",mal);
}