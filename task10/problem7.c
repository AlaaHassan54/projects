#include <stdio.h>
#include <stdbool.h>
void reverse(int *p_l, int *p_r);
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
   int arr[n];
   int *p_l=&arr[0];
   int *p_r=&arr[n-1];

   for(int i=0; i<n; i++)
   scanf("%d",p_l+i);

 reverse(p_l,p_r);

 for(int i=0; i<n; i++)
 printf("%d  ",*(p_l+i));

}
void reverse(int *p_l, int *p_r)
{
    while(p_l<=p_r)
    {
        int temp=*p_l;
        *p_l=*p_r;
        *p_r=temp;
        p_l++;
        p_r--;
    }
}