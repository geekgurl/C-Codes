#include<stdio.h>
void fibonacci(int);
void main()
{
    int n;
    printf("enter the range:");
    scanf("%d",&n);
    fibonacci(n);
}
void fibonacci(int a)
{
    int i,b=0,c=1,d;
    printf("%d %d\t",b,c);
    for (i=3;i<=a;i++)
    {
        d=b+c;
        b=c;
        c=d;
        printf("%d\t",d);
    }
}