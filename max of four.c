#include<stdio.h>
int max2(int a,int b)
{
   return a>b?a:b;
}
int max3(int a,int b,int c)
{
    return a,max2(b,c);
}
int max4(int a,int b,int c,int d)
{
    return (a,max3(a,b,c));
}
int main()
{
    int n,m,result;
    printf("enter the value of n,m");
    scanf("%d %d",&n,&m);
   result=max2(n,m);
   printf("%d",result);
}