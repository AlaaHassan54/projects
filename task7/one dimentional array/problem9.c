#include <stdio.h>
#define MAX_SIZE 50
int main()
{
     int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[MAX_SIZE];
    printf("enter the elemants: ");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
     int num,pos;
     printf("enter the number and position: ");
     scanf("%d%d", &num, &pos);
     if(pos<=0||pos>n+1)
     printf("invalid");
     else {
     pos--;
     for(int i=n;i>=pos;i--)
     arr[i]=arr[i-1];
     arr[pos]=num;
     for(int i=0;i<=n;i++)
     printf("%d ",arr[i]);}
    
}