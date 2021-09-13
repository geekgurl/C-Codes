#include<stdio.h>
void main()
{
    int i,n,a[10][10],m,j,count=0;
    printf("enter the number of rows :");
    scanf("%d",&n);
    printf("enter the number of columns :");
    scanf("%d",&m);
    printf("enter the elements of array :");
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
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}