#include<stdio.h>
int fact(int);
void main()
{
    int n,ans;
    printf("enter the number:");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}
int fact(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
}