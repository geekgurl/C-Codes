#include<stdio.h>
#include<math.h>
void main()
{
    int n,s,r,sum=0,mult,b=0,x,y,sum1=0,k=1;
    printf("enter number in octal:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        mult=pow(8,b);
        sum=sum+(r*mult);
        n=n/10;
        b++;
    }
    x=sum;
    while(x!=0)
    {
        y=x%2;
        sum1=sum1+(y*k);
        k=k*10;
        x=x/2;
    }
    printf("binary equivalent of octal number is %d",sum1);
}