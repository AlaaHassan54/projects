#include <stdio.h>
#include <math.h>
int main()
{
    float s1,s2,s3,s4,s5,avr,tot,per;
    printf("Enter marks of five subjects:");
    scanf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
    tot=s1+s2+s3+s4+s5;
    avr=tot/5;
    per=tot*.2;
    printf("total=%.2f\naverage=%.2f\npercentage=%.2f\n",tot,avr,per);
}