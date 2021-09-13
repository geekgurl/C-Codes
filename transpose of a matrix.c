#include<stdio.h>
void main()
{
    int i,j,n,m,a[50][50];
    printf("enter the number of rows : ");
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}