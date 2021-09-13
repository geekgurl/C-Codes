#include<stdio.h>
void main()
{
    int i,j,a[10][10],n,m,sum_rows=0,sum_columns=0,diagonal_sum=0;
    printf("enter the number of rows :");
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
    for(j=0;j<m;j++)
    {
        sum_rows=0;
        for(i=0;i<n;i++)
        {
            sum_rows=sum_rows+a[i][j];
        }
        printf("\n%d",sum_rows);
    }
    for(i=0;i<n;i++)
    {
        sum_columns=0;
        for(j=0;j<m;j++)
        {
            sum_columns=sum_columns+a[i][j];
        }
        printf("\n%d",sum_columns);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]==a[j])
            {
                diagonal_sum=diagonal_sum+a[i][j];
            }
        }
    }
    printf("\n diagnoal_sum=%d",diagonal_sum);
    
}