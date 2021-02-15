#include<stdio.h>
void main()
{
    int n,sum=0,r;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("enter the numbers:");
    do
    {
        scanf("%d",&r);
        sum=sum+r;
        n--;
    } while (n!=0);
    printf("sum=%d",sum);
}
