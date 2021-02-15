#include<stdio.h>
#include<math.h>
void main()
{
    int n,b,r,sum=0,mult,count=0,i,temp,sum1=0,s;
    printf("enter binary digit:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum1=sum1+r;
        n=n/10;
        count++;
    }
    printf("count=%d",count);
    for(i=0;i<count;i++) // other method of doing this- for(i=0;temp!=0;i++)
    {
        s=temp%10;
        mult=pow(2,i);
        sum=sum+(s*mult);
        temp=temp/10;
    }
    printf("\nresult in decimal number is %d",sum);
}