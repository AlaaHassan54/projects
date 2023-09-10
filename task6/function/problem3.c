#include <stdio.h>
int Max(int x, int y);
int Min(int x, int y);
int main()
{
int n1,n2;
printf("enter the two numbers:");
scanf("%d%d",&n1,&n2);
int max=Max(n1,n2);
int min=Min(n1,n2);
printf("max: %d min: %d\n",max,min);
}
int Max(int x, int y)
{
    if(x>y)return x;
    else return y;
}
int Min(int x, int y)
{
    if(x<y)return x;
    else return y;
}