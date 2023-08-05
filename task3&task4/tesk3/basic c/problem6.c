#include <stdio.h>
#include <math.h>
int main()
{
    float r,dia,area,cir;
    printf("enter the radius: ");
    scanf("%f",&r);
    dia=2*r;
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("diameter=%.1f\nCircumference=%.1f\narea=%.1f\n",dia,cir,area);
}