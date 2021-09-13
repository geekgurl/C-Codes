#include<stdio.h>
void main()
{
    int n,r,sum=0,k=1;
    printf("enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r==0)
        {
            r=5;
        }
        sum=sum+r*k;
        k=k*10;
        n=n/10;
    }
    printf("%d",sum);
}