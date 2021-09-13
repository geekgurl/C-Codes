#include<stdio.h>
int fact(int);
void main()
{
    int n,ans;
    printf("enter the number");
    scanf("%d",&n);
    ans=fact(n);
    printf("%d",ans);
}
int fact(int a)
{
    int i,factorial=1;
    for(i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}