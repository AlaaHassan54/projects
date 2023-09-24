#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the row and column: ");
    scanf("%d%d",&r,&c);
    int a[r][c],t[r][c];
    printf("enetr the  matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        scanf("%d",&a[i][j]);
    }
 for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        t[i][j]=a[j][i];
    }
    int fl=1;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        if(a[i][j]!=t[i][j])fl=0;
    }
    if(fl)printf("symmetric matrix");
    else printf("not symmetric matrix");
}