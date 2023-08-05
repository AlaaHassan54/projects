#include <stdio.h>
#include <math.h>
int main()
{
    float num,root;
    printf("enter the number: ");
    scanf("%f", &num);
   root=sqrt(num);
   printf("Square root of %.1f = %.1f",num, root);
}