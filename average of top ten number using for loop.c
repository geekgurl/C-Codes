#include<stdio.h>
void main()
{
    int n,limit,temp;
    float average,sum=0;
    printf("enter the limit:");
    scanf("%d",&limit);
    temp=limit;
    printf("enter the numbers:");
    while(limit)
    {
        scanf("%d",&n);
        sum=sum+n;
        limit--;
    }
    average=sum/temp;
    printf("average of numbers are %f",average);
}
