#include <stdio.h>
int main()
{
int num;
printf("enter the number: ");
scanf("%d", &num);
if(num%5==0 &&num%11==0)
printf("number is divisible");
else printf("number is not divisible");
return 0;
}