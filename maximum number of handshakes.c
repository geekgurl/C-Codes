#include<stdio.h>
void main()
{
    double n,fact=1,fact1=1,i,j,x,y,r;//
    printf("enter the number of student(n):");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of n is %0.2lf",fact);
    x=n-2;
    for(j=1;j<=x;j++)
    {
        fact1=fact1*j;
    }
    printf("\nfactorail of (n-2) is %0.2lf",fact1);
     y=fact1*2;
    r=fact/y;
    printf("\nmaximum number of handshakes are %0.2lf",r); 

}