#include <stdio.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elemants: ");
    for(int i=0;i<n;i++)
   scanf("%d", &arr[i]);
   for(int i=0;i<n;i++)
   {for(int j=i+1;j<n;j++)
   {
    int temp=arr[i];
    if(arr[j]<arr[i])
    {   arr[i]=arr[j];
        arr[j]=temp;
    }
   }
   }
   for(int i=0;i<n;i++)
   printf("%d ",arr[i]);
}