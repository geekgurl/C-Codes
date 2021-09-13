#include<stdio.h>
void main()
{
    int i,a,b,sum=0;
    printf("enter the range:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("sum=%d",sum);
}