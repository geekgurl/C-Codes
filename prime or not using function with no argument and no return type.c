#include<stdio.h>
void num();
void main()
{
    num();
}
void num()
{
    int n,i,r=1;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        r=n%i;
    }
    if(r==0)
    {
        printf("not prime number");
    }
    else
    {
        printf("prime number");
    }
}
