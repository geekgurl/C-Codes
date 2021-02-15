#include<stdio.h>
void main()
{
    int n,r,temp,count=0;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=0 && temp%r==0)
        {
            count++;
        }
        n=n/10;
    }
   
    printf("%d",count);
}