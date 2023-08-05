#include<stdio.h>
int main()
{ int num,bit;
printf("enter the number and nth bit number: : ");
scanf("%d%d", &num,&bit); 
int c=1<<(bit);
if(num&c)
printf("%d bit of %d is set 1",num,bit);
else printf("%d bit of %d is set 0",num,bit);
}
  