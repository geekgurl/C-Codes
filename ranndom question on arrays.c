#include<stdio.h>
void main()
{
    int i,a[5][5],j,n;
    printf("enter the number of inputs(n) :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    { 
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }                            
        printf("\n");
    }
}