#include<stdio.h>
void main()
{
    int n,i,m=1;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)// i=2 i<2
    {
        if(n%i==0)
        {
            m=n%i;
        }   
    }
    if(m==0)
    {
        printf("\nnot prime number");
    }
    else
    {
        printf("\nprime number");
    }
    
}