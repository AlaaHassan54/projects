#include <stdio.h>
int main()
{
    int num;
    printf("enter the number: ");
    scanf("%d", &num);
    for(int i=1;i<=12;i++)
    {printf("%d * %d = %d\n",i,num,i*5);

    }
}