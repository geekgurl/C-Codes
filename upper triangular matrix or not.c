#include<stdio.h>
void main()
{
    int i,n,j,m,a[10][10],upper_triangular=0;
    printf("enter the enumber of rows :");
    scanf("%d",&n);
    printf("enter the number of columns :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i>j && a[i][j]==0)
            {
                upper_triangular=1;
            }
        }
    }
    if(upper_triangular==0)
    {
        printf("not a upper triangular matrix");
    } 
    else 
    {
        printf("upper triangular");
    }
    
}