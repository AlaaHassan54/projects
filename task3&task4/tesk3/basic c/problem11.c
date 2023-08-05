#include <stdio.h>
#include <math.h>
int main()
{
    float base,power;
    printf("enter the base and the power: ");
    scanf("%f%f",&base,&power);
    float res=pow(base,power);
    printf("%.0f ^ %.0f =%.1f",base,power,res);
}