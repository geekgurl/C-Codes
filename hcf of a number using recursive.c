#include<stdio.h>
int hcf(int,int);
void main()
{
    int n,m,ans;
     
    printf("enter the numbers: ");
    scanf("%d %d",&n,&m);
    ans=hcf(n,m);
    printf("%d",ans);
}
int hcf(int a,int b)
{
    if(b!=0)
    {
        return hcf(b,a%b);
    }            
    else
    {
        return a;
    }
    
}