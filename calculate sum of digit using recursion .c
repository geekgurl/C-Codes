#include<stdio.h>
int digit(int);
void main()
{
    int n,ans;
    printf("entr the number:");
    scanf("%d",&n);
    ans=digit(n);
    printf("%d",ans);
}
int r,sum=0;
int digit(int a)
{
    if(a!=0)
    {
        r=a%10;
        sum=sum+r;
        digit(a/10);
    }
    else
    {
        return sum;
    }
    return sum;
}