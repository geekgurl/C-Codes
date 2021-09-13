#include<stdio.h>
#include<math.h>
int num (int,int);
int main()
{
    int n,x,result;
    printf("enter the number:");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&x);
    result=num(n,x);
    printf("%d^%d=%d",n,x,result);
    return 0;
}
int num(int a,int b)
{
    if(b!=0)
    {
        return (a*num(a,b-1));
    }
    else
    {
        return 1;
    }
}