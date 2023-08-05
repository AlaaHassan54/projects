#include<stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    int res=~num;
    printf("Number after bits are flipped: %d",res);
}