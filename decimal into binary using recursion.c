#include<stdio.h>
int decimal_conversion(int);
void main()
{
    int n,ans;
    printf("enter the number");
    scanf("%d",&n);
    ans=decimal_conversion(n);
    printf("%d",ans);
}
int r,sum=0,k=1;
int decimal_conversion(int a)
{
    if(a!=0)
    {
        r=a%2;
        sum=sum+(r*k);
        k=k*10;
        decimal_conversion(a/2);
    }
    else
    {
        return sum;
    }
    return sum;
}