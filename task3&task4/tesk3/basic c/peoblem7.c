#include <stdio.h>
#include <math.h>
int main()
{float l,m,km;
printf("enter the length : ");
scanf("%f", &l);
m=l/100;
km=m/1000;
printf("Length in meter =%.2f\nLength in kilometer:%.2f",m,km);
    
}