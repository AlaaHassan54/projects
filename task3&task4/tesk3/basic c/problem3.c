#include <stdio.h>
int main()
{float num1,num2;
printf("enter the two numbers: ");
scanf("%f%f",&num1,&num2);
float sum=num1+num2;
float diff=num1-num2;
float mal=num1*num2;
int mod=(int)num1%(int)num2;
float div=num1/num2;
printf("sum=%.1f\ndifference=%.1f\nproduct=%.1f\nquotient=%.1f\nmodulus=%d\n",sum,diff,mal,div,mod);

}