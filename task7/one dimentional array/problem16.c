#include <stdio.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n],reversed[n];
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    int j=0;
    for(int i=n-1;i>=0;i--)
    {reversed[j]=arr[i];
    j++;}
     for(int i=0; i<n; i++)
     printf("%d ",reversed[i]);
}