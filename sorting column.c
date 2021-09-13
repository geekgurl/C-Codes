#include<stdio.h>
void main()
{
    int i,j,n,m;
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("ente rthe elements of 2d matrix :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int col,temp;
    printf("enter the column :");
    scanf("%d",&col);
 for(i=0;i<m;i++)
 {
     for(j=0;j<m-1;j++)
     {
         if(a[j][col]>a[j+1][col])
         {
             temp=a[j][col];
             a[j][col]=a[j+1][col];
             a[j+1][col]=temp;
         }
     }
 }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}