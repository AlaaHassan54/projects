#include <stdio.h>
int main()
{
   int base,pow;
   long long mal=1;
   printf("enter the base and power: ");
   scanf("%d%d",&base,&pow);
   for(int i=1;i<=pow;i++)
    mal*=base;
    printf("%d",mal);
}