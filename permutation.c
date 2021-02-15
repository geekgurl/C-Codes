#include<stdio.h>
void main()
{
    int n,r,i,fact=1,fact1=1,x,j,s;
    printf("enter the values of n: ");
    scanf("%d",&n);
    printf("enter the value of r:");
    scanf("%d",&r);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nfactorial of n is %d",fact);
    x=n-r;
    for(j=1;j<=x;j++)
    {
        fact1=fact1*j;
    }
    printf("\nfactorial of (n-r) is %d",fact1);
    s=fact/fact1;
    printf("\npermutaion of n things in r ways is %d",s); 
}