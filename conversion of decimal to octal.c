#include<stdio.h>
void main()
{
    int n,r,octal=0,temp,s,sum=0,k=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%8;
        octal=(octal)+(r*k);
        k=k*10;
        n=n/8; 
    }
    printf("octal number=%d",octal);
}