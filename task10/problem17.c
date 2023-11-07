#include <stdio.h>
#include <stdbool.h>
void sort(int n,int *ptr_s,int *ptr_e);
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr_s=&arr[0];
    int *ptr_e=&arr[n-1];

    
    for(int i=0; i<n; i++)
    scanf("%d", ptr_s+i);

    sort(n,ptr_s,ptr_e);

    for(int i=0; i<n; i++)
    printf("%d ",*(ptr_s+i));

}
void sort(int n,int *ptr_s,int *ptr_e)
{ while(ptr_s<=ptr_e)
{
    for(int *it=ptr_s+1;it<=ptr_e;it++)
    {
        if(*it>*ptr_s)
        {
            int temp=*it;
            *it=*ptr_s;
            *ptr_s=temp;
        }
    }
    ptr_s++;
}
   
}