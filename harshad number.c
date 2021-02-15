#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("\nsum=%d",sum);
    if(temp%sum==0)
    {
        printf("\nharshad number");
    }
    else
    {
        printf("\nnot a harshad number");
    }
    
}