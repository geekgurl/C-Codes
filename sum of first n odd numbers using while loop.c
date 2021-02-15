#include<stdio.h>
void main()
{
    int n,sum=0,r=1;
    printf("enter the limitto find odd number:");
    scanf("%d",&n);
    while(n!=0)
    {
        sum=sum+r;
        r=r+2;
        n--;
    }
    printf("sum=%d",sum);
}    