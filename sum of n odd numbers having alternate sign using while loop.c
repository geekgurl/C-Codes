#include<stdio.h>
void main()
{
    int n,r=1,sum=0,sign=1;
    printf("enter the limit of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+(r*sign);
        sign=(-1)*sign;
        r=r+2;
        n--;
    }
    printf("sum=%d",sum);
}