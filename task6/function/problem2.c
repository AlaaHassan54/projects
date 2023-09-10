#include <stdio.h>
double dia(double r);
double area(double r);
double cir(double r);
int main()
{double radius;
    printf("enter the radius:");
scanf("%lf",&radius);
double Dia= dia(radius);
double Area = area(radius);
double Cir = cir(radius);
printf("Diameter:%.2f\nCircumference:%.2f\nArea:%.2f", Dia, Cir, Area);
return 0;
}
double dia(double r)
{
    return (r*2);
  
}
double area(double r)
{
    return (3.14*r*r);
}
double cir(double r)
{
    return (2*3.14*r);
}