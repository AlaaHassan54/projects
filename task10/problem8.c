#include <stdio.h>
#include <stdbool.h>
char search(int n,int x,int *ptr);
int main()
{
    int n,x;
    printf("enter the size and element: ");
    scanf("%d%d", &n,&x);
    int arr[n];
    int *ptr=&arr[0];

    for(int i=0; i<n; i++)
    scanf("%d", ptr+i);

     char res=search(n,x,ptr);

     if(res==1)printf("element exists");
     else printf("element doesnot exist");
}

char search(int n,int x,int *ptr)
{char found=0;

for(int i=0; i<n; i++)
{
    if(*ptr==x)
      found=1;

 ptr++;

}
return found;
}