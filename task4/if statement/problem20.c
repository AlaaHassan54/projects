#include <stdio.h>
int main()
{
    float sal,DA,HRA,G_sal;
    printf("enter the salary: ");
    scanf("%f",&sal);
    if(sal>=20001)
    {HRA=sal*.3;
    DA=sal*.95;
    }else if(sal>=10001&&sal<=20000)
    {HRA=sal*.25;
    DA=sal*.90;}
    else {HRA=sal*.2;
    DA=sal*.8;
    }G_sal=sal+DA+HRA;
    printf("gross salary=%.1f",G_sal);
}