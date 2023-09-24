#include <stdio.h>
int main()
{
    int r,c;
    printf("enter the row and column: ");
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],sub[r][c];
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
     for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
       sub[i][j]=a[i][j]-b[i][j];
    }
     for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
       printf("%d  ",sub[i][j]);
       printf("\n");
    }
    
}