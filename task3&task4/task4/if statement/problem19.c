#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("enter the mark: ");
    scanf("%f%f%f%f%f", &sub1, &sub2, &sub3, &sub4, &sub5);
    float sum=(sub1+sub2+sub3+sub4+sub5)*.2;
    printf("percentage is %.3f\n",sum);
    if(sum>=90)
    printf("grade A");
    else if(sum>=80)
    printf("grade B");
    else if(sum>=70)
    printf("grade C");
    else if(sum>=60)
    printf("grade D");
    else if(sum>=40)
    printf("grade E");
 else printf("grade F");





}