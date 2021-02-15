#include<stdio.h>
void main()
{
    int n,i,sum=0,r;
    printf("enter the number:");
    scanf("%d",&n);
    printf("factors of number are:");
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            r=n/i;
            printf("%d\t",r);
            sum=sum+r;
        }
    }
  
    if(sum==n)
    {
        printf("\nperfect number");
    }
    else
    {
        printf("\nnot a perfect number");
    }
    
}