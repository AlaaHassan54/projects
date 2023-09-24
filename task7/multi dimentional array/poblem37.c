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
    int der=0;
    if(r==2)
    {
der=a[0][0]*a[1][1]-a[1][0]*a[0][1];
    }
    else 
    {
der=(a[0][0]*((a[1][1]*a[2][2])-(a[1][2]*a[2][1])))-(a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0])))+(a[0][2]*((a[1][0]*a[2][1])-(a[1][1]*a[2][0])));
    }
    printf("Determinant of the matrix: %d",der);
}