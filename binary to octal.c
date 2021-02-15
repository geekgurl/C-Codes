#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,s,sum=0,mult,b=0,x,y=1,sum1=0;
    printf("enter number in binary:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        mult=pow(2,b);
        sum=sum+(r*mult);
        n=n/10;
        b++;
    }
    printf("decimal equivalent of binary number is %d",sum);
    s=sum; 
    while(s!=0)
    {
        x=s%8;
        sum1=sum1+(x*y);
        y=y*10;
        s=s/8;
    }
    printf("\noctal equivalent of binary is %d",sum1);
}