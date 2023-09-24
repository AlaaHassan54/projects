#include <stdio.h>
int main()
{
    int n1,n2;
    printf("enter the first and second size: ");
    scanf("%d%d",&n1,&n2);
    int arr1[n1],arr2[n2],merge[n1+n2];
    printf("enter the element of first array:");
    for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
     printf("enter the element of second array:");
    for(int i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
    int l=0,r=0;
    for(int i=0;i<n1+n2;i++)
    {if(l==n1)
    {
        merge[i]=arr2[r];r++;
    }
    else if(r==n2)
    {
        merge[i]=arr1[l];l++;
    }
    else {
        if(arr1[l]<arr2[r]){merge[i]=arr1[l];l++;}
    else {merge[i]=arr2[r];r++;}
    }
    }
    for(int i=0;i<n1+n2;i++)
    printf("%d ",merge[i]);
}