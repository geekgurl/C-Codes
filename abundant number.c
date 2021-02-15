#include<stdio.h>
void main()
{
    int n,r,sum=0,i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            r=n/i;
            printf("\nr=%d",r);
            sum=sum+r;
            printf("\nsum=%d",sum);
        }
    }
    if(sum-n>0)
    {
        printf("\nabundant number");
    }
    else
    {
        printf("\nnot abundant number");
    }
    
}