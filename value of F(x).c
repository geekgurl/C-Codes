#include<stdio.h>
void main()
{
    int x,f;
    printf("enter the value:");
    scanf("%d",&x);
    if(x>=0 && x<=10)
    {
        f=(x*x)+2;
        printf("the value of f(x) is %d",f);
    }
    else if(x>=11  && x<=20)
    {
        f=(x*x)+(2*x);
        printf("the value of f(x) is %d",f);
    }
    else if (x>=21 && x<=30)
    {
        f=(x*x*x)+(2*x*x);
        printf("the value of f(x) is %d",f);
    }
    else
    {
        printf("the value of f(x) is 0");
    }
    
}