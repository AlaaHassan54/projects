#include <stdio.h>
double cube(int num);
int main()
{
int num;
scanf("%d", &num);
double res=cube(num);
printf("cube of %d:%.2f",num,res);
}
double cube(int num)
{
    double res=num*num*num;
    return res;
}