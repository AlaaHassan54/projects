#include <stdio.h>
#include <math.h>
int main()
{
    float temp,f;
    printf("enter the temperture in Celsius: ");
    scanf("%f", &temp);
    f=(temp*9/5)+32;
   printf("Temperature in Fahrenheit =%.1f\n",f);
}