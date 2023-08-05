#include<stdio.h>
#include<math.h>
int main()
{ int num;
printf("enter the number: ");
scanf("%d", &num); 
if(num&1)
printf("Least Significant Bit of %d is set 1",num);
else printf("Least Significant Bit of %d is set 0",num);

}