#include <stdio.h>
#include <math.h>
int main()
{
int days,year,day,week;
 printf("enter the day: ");
 scanf("%d", &day);
year=day/365;
int re=day-(year*365);
week=re/7;
days=re-(week*7);
printf("%d days = %d years, %d weeks, %ddays",day,year,week,days);
}