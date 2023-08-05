#include <stdio.h>
int main()
{ int angle[3];
int sum=0;
for(int i=0;i<3;i++)
{printf("enter the angle: " );
scanf("%d",&angle[i]);
sum+=angle[i];}
if(angle[0]>0&&angle[1]>0&&angle[2]>0&&sum==180)
printf("triangle");
else printf("not triangle");
}