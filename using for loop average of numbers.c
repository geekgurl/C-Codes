#include<stdio.h>
void main()
{
    int n,temp,limit,i;
    float average,sum=0;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("enter the numbers:");
    for(i=1;i<=limit;i++)
    {
        scanf("%d",&n);
        sum=sum+n;
    }
    average=sum/limit;
    printf("Average=%f",average);
}