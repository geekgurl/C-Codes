#include<stdio.h>
void main()
{
    float n,x,i,sum=10;
    printf("enter the value of n:");
    printf("enter the value of x:");
    scanf("%f %f",&n,&x);
    for(i=1;i<=n;i++)
    {
        sum=sum+((i*x)/(i+1));
    }
    printf("sum of series=%0.2f",sum);

}