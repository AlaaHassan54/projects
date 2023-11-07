#include <stdio.h>
#include <stdbool.h>
void swap_arrays(int size,int *ptr1,int *ptr2);
int main()
{
int n;
printf("enter the size :");
scanf("%d", &n);
int a1[n], a2[n];
int *ptr1=&a1[0], *ptr2=&a2[0];

for(int i=0;i<n;i++)
scanf("%d",ptr1+i);

for(int i=0;i<n;i++)
scanf("%d",ptr2+i);

swap_arrays(n,ptr1,ptr2);

for(int i=0;i<n;i++)
printf("%d  ",*(ptr1+i));

printf("\n");

for(int i=0;i<n;i++)
printf("%d  ",*(ptr2+i));
}
void swap_arrays(int size,int *ptr1,int *ptr2)
{
 for(int i=0;i<size;i++)
 {
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    ptr1++;ptr2++;
 }
}