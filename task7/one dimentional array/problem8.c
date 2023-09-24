#include <stdio.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr1[n],arr2[n];
    printf("enter the elemants: ");
    for(int i=0;i<n;i++)
    {scanf("%d", &arr1[i]);
    arr2[i]=arr1[i];}
for(int i=0;i<n;i++)
printf("%d ",arr1[i]);
printf("\n");
for(int i=0;i<n;i++)
printf("%d ",arr2[i]);
}