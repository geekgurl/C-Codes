#include<stdio.h>
void main()
{
    int n,r,bin=0,num=1,k=1;
    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0)
    {
        r=n%2;
        bin=bin+(r*k);
        k=k*10;
        n=n/2;
    }

    printf("binary digit=%d",bin);
}