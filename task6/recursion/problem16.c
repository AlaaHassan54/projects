#include <stdio.h>
int sum=0;
int reverse(int num);
int main()
{int num;
printf("enter the number:");
scanf("%d",&num);
int res=reverse(num);
if(num==res)printf("palindrome");
else printf("not palindrome");
    
}
int reverse(int num)
{ if(num==0)return sum;
int mod=num%10;
sum=sum*10+mod;
  num/=10;
  reverse(num);
}//5467