#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("enter numbers:");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("LARGEST NUMBER IS a");
    }
    else if(b>a && b>c && b>d)
    {
        printf("LARGEST NUMBER IS b");
    }
    else if(c>a && c>b && c>d)
    {
        printf("LARGEST NUMBER IS c");
    }
    else
    {
        printf("LARGEST NUMBER IS d");
    }
}