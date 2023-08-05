#include<stdio.h>
int main()
{
int num,bit,res;
printf("enter the number and nth bit to toggle: ");
scanf("%d%d", &num,&bit);
int c=1<<bit;
if(num&c)
{res=num&(~c);}
else {res=num|c;}
printf("After toggling nth bit:%d",res);
}//11111111
 //00000010    