#include<stdio.h>
int main()
{int num,bit;
printf("enter the number and nth bit number: : ");
scanf("%d%d", &num,&bit); 
int c=1<<bit;
int res=num|c;
printf("Number after setting nth bit: %d in decimal",res);
}//00001100
 //00000001