#include <stdio.h>
#define MAX_SIZE 100
int main()
{
     int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n],freq[MAX_SIZE]={0};
    printf("enter the elemants: ");
    for(int i=0;i<n;i++)
    {scanf("%d", &arr[i]);
    freq[arr[i]]++;}
    int count=0;
for(int i=0;i<MAX_SIZE;i++)
{
    if(freq[i]>=2)count+=freq[i]-1;
}printf("%d",count);
}