#include<stdio.h>
int elements(int);
void main()
{
    int n,ans;
    printf("enter the limit:");
    scanf("%d ",&n);
    ans=elements(n);
    printf("%d",ans);
}
int elements(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return ((a*a)+elements(a-1));
    }
}