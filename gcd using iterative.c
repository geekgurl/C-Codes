#include<stdio.h>
int hcf(int,int);
void main()
{
    int n,m,ans;
    printf("enter the numbers:");
    scanf("%d %d",&n,&m);
    ans=hcf(n,m);
    printf("%d",ans);
}
int hcf(int a,int b)
{
    int gcd,i,n;
    if(a>b)
    {
        n=a;
    }
    else
    {
        n=b;
    }
    for(i=1;i<=n;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}