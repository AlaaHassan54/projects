#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void multifun(int n,int *ptr,int *max,int *min);

int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr=&arr[0];

    for(int i = 0; i < n; i++)
    scanf("%d", ptr+i);

    
    int min=*ptr,max=*ptr;
    
    multifun(n,ptr,&max,&min);
printf("max=%d min=%d\n",max,min);

}


void multifun(int n,int *ptr,int *max,int *min)
{
    for(int i=0;i<n-1;i++)
    {
        if(*(ptr+1)>*ptr)
        *max=*(ptr+1);

        if(*(ptr+1)<*ptr)
        *min=*(ptr+1);
         
         ptr++;

    }
}