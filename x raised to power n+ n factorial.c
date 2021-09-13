#include<stdio.h>
float fact(int);
float power_of_x(int,int);
void main()
{
    int n,x,i;
    float sum=0;
    printf("enter the range:");
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(power_of_x(x,i)/fact(i));
    }
    printf("Sum %f",sum);
}
float fact(int a)
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
float power_of_x(int b,int c)
{
    if(c==0)
    {
        return 1;
    }
    else
    {
        return (b*(power_of_x(b,c-1)));
    }
}