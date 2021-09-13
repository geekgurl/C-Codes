#include<stdio.h>
void main()
{
    int i,j,k,n,count=1;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
           printf("%d",count);
           count=!count;
        }
        count=i%2;
        printf("\n");
    }
}