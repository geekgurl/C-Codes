#include<stdio.h>
int addition(int);
void main()
{
    int i,sum1=0,n,r,result;
    printf("enetr the value of n:");
    scanf("%d",&n);
     result=addition(n);
    for(i=1;i<=n;i++)
    {
        sum1=sum1+addition(i);
    }
    printf("%d",sum1);
}

int addition(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    return sum;
}