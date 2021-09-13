#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b,result;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    result=hcf(a,b);
    printf("%d",result);
}
int hcf(int a,int b)
{
    int r,i,gcd;
    if(a>b)
    {
        r=a;
    }
    else
    {
        r=b;
    }
    for(i=1;i<=r;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}