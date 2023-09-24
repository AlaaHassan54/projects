#include <stdio.h>
int main()
{
     int r,c;
    printf("enter the row and column: ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
    printf("enetr the first matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        scanf("%d",&a[i][j]);
    }
    printf("enetr the second matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        scanf("%d",&b[i][j]);
    }
    int fl=1;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        if(a[i][j]!=b[i][j]){fl=0;break;}
    }
    if(fl)printf("equal");
    else printf("notequal");
}