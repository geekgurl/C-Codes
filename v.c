#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        } 
        for(k=n;k>=((2*n)-1);k--)
        {
            printf("*");
        }
        printf("\n");
    }
}
