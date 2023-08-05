#include <stdio.h>
int main()
{int num;
printf("enetr the month: ");
scanf("%d", &num);
if(num==2)
printf("number of days is 28");
else if(num==4||num==6||num==9||num==11)
printf("number of days is 30");
else if(num==1||num==3||num==5||num==7||num==8||num==10||num==12)
printf("number of days is 31");
else printf("invalid");
}