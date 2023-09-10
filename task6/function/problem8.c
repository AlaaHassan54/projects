#include <stdio.h>
void armstrong(int l,int u);
int cube(int num);
int main()
{int u,l;
printf("enter the lower and upper:");
scanf("%d%d",&l,&u);
armstrong(l,u);
}
void armstrong(int l,int u)
{for(int i=l;i<=u;i++)
{int copy=i,sum=0;
while(copy>0)
{int mod=copy%10;
sum+=cube(mod);
copy/=10;
}
   if(sum==i)printf("%d  ",i);
}

}
int cube(int num)
{
    return (num*num*num);
}