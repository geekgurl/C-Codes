#include<stdio.h>
void main()
{
    int a[20],i,j,sum,n;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value of sum :");
    scanf("%d",&sum);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]+a[j])==sum)
            {
                printf("pairs with sum  %d are {%d,%d}\n",sum,a[i],a[j]);
            }
        }
    }
}