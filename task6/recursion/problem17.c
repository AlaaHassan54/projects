#include <stdio.h>
int sum=0;
int Sum(int num);
int main()
{int num;
printf("enter the number:");
scanf("%d",&num);
int res=Sum(num);
printf("%d", res);
}
int Sum(int num)
{if(num==0)return sum;
sum+=num%10;
Sum(num/10);
}
