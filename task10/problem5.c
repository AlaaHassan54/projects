#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];

    int *ptr_s1=&arr1[0];
    int *ptr_e1=&arr1[n-1];
    int *ptr2=&arr2[0];

    while(ptr_s1<=ptr_e1)
    {
    scanf("%d", ptr_s1);
    ptr_s1++;
    }

   ptr_s1=&arr1[0];

   while(ptr_s1<=ptr_e1)
   {
    *ptr2=*ptr_s1;
    ptr_s1++;ptr2++;
   }

    ptr_s1=&arr1[0];

   printf("array1\n");
   while(ptr_s1<=ptr_e1)
   {
    printf("%d  ", *ptr_s1);
    ptr_s1++;
   }

    printf("\n");

    printf("array2\n");
   for(int i=0;i<n;i++)
    printf("%d  ", arr2[i]);
   
}