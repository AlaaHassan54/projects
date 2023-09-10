#include <stdio.h>
int fact(int num);
int main()
{int num;
printf("enter the number:");
scanf("%d", &num);
int res=fact(num);
printf("%d", res);

}
int fact(int num)
{
    if(num==1)return 1;
    return num*fact(num-1);
}
