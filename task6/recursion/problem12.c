#include <stdio.h>
int odd(int l,int u);
int even(int l,int u);
int main()
{int lower,upper;
printf("enter the lower and upper:");
scanf("%d%d",&lower,&upper);
odd(lower,upper);
printf("\n");
even(lower,upper);
}
int odd(int l,int u)
{if(l>u)return 0;
printf("%d ",l);
odd(l+2,u);
}
int even(int l,int u)
{if(l>u)return 0;
printf("%d ",++l);
even(l+1,u);
}