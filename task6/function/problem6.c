#include <stdio.h>
void prime_numbers(int lower,int upper);
int main()
{int l,u;
printf("enter the lower and upper:");
scanf("%d%d",&l,&u);
prime_numbers(l,u);

}
void prime_numbers(int lower,int upper)
{
    for(int i=lower;i<=upper;i++)
    {int fl=1;
        for(int j=2;j<i;j++)
         if(i%j==0){fl=0;break;}
         if(fl)printf("%d  ",i);
    }
}