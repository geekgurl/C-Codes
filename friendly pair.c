#include<stdio.h>
void main()
{
    int n,m,sum1=0,i,r1,r2,sum2=0,z1,z2;
    printf("enter the values of n & m:");
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            r1=n/i;
            sum1=sum1+r1;
        }
    }
    if(sum1%n==0)
    {
        z1=sum1/n;
    }
    for(i=1;i<=m;i++)
    {
        if(m%i==0)
        {
            r2=m/i;
            sum2=sum2+r2;
        }
    }
    printf("\nsum2=%d",sum2);
    if(sum2%m==0) 
    {
        z2=(sum2)/m;
        printf("\nz2=%d",z2);
    }
    printf("\nz1=%d and z2=%d",z1,z2);
 
    if(z1==z2)
    {
        printf("\nfriendly pair");
    }
    else
    {
        printf("\nnot a friendly pair");
    }
    

}