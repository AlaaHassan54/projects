#include<stdio.h>
int main()
{int num,bit;
printf("enter the number and nth bit to clear:  ");
scanf("%d%d", &num,&bit);
int c=1<<bit;
int res=(num&(~c));
printf("Number after clearing nth bit:%d",res);
}//00001101
 //11111110
