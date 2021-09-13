#include<stdio.h>
void main()
{
    int i,j,m,n,a[10][10],count=0,max=0,row=0;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    printf("enter the number of columns :");
    scanf("%d",&m);
    printf("enter the lements of matrix :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                count++;
                printf("\ncount for i=%d is %d",i,count);
            }
        }
        if(count>max)
        {
            max=count;
            row=i;
        }
    }
    printf("\n%d",row);
}