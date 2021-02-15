#include<stdio.h>
void main()
{
    float a,b,c,sum;
    printf("enter value");
    scanf("%f %f %f",&a,&b,&c);
    sum=a+b+c;

    if(sum==180.0)
    {
        printf("valid triangle");
    }
    else
    {
        printf("not a valid triangle");
    }

}
