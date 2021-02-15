#include<stdio.h>
#include<math.h>
void main()
{
    int n,r,sum=0,mult,i;
    printf("enter the octal number:");
    scanf("%d",&n);
    for(i=0;n!=0;i++)
    {
        r=n%10;
        mult=pow(8,i);
        sum=sum+(r*mult);
        n=n/10;
    }
    printf("octal number in decimal is %d",sum);
}