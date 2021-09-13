#include<stdio.h>
int natural(int);
void main()
{
    int n,ans;
    printf("enter the value of n:");
    scanf("%d",&n);
    ans=natural(n);
    printf("%d",ans);
}
int natural(int a)
{
    if(a==0)
    {
        return 0;
    } 
    else
    {
        return a+natural(a-1);
    }
}