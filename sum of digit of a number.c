#include<stdio.h>
void main()
{
    int a,r,x,sum=0;
    printf("enter number");
    
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    printf("sum of digit is %d\n",sum);
    
}