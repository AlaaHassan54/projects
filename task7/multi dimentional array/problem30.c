#include <stdio.h>
int main()
{
      int r,c;
    printf("enter the row and column: ");
    scanf("%d%d",&r,&c);
    int a[r][c],row[r],col[c];
    printf("enetr the  matrix: ");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        scanf("%d",&a[i][j]);
    }
for(int i = 0; i < r; i++)
    {row[i]=0;col[i]=0;
        for(int j = 0; j < c; j++)
       {
        row[i]+=a[i][j];
        col[i]+=a[j][i];
       }
    }
    printf("sum of rows:");
    for(int i = 0; i < r; i++)
    printf("%d ",row[i]);
    printf("\n");
     printf("sum of colum:");
    for(int i = 0; i < c; i++)
    printf("%d ",col[i]);
}