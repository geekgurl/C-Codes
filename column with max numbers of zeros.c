#include<stdio.h>
void main()
{
    int i,n,j,m,a[10][10], count=0;
    printf("enter the number of rows :");
    scanf("%d",&n);
    printf("ente rthe number if columns  :");
    scanf("%d",&m);
    printf("enter the elements of matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int col,max=0;
    for(j=0;j<m;j++)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            if(a[i][j]==0)
            {
                count++;
                printf("\ncount for j=%d is %d",j,count);
            }
        }
        if(count>max)
        {
            max=count;
            col=j;
        }
    }
    printf("\n%d",col);
}