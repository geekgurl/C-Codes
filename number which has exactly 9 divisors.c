#include<stdio.h>
void main()
{
    int n,count=0,i,r;
    printf("enter the number:");
    scanf("%d",&n);
    i=n;
    printf("divisors of number are:");
    for(i=1;i<=n;i++)
    {
        r=n%i;
        if(r==0)
        {
            count++;
            printf("\n%d",i);
        }
    }
    printf("\ncount=%d",count);
    if(count==9)
    {
        printf("\nthe number has exactly 9 divisors");
    }
    else
    {
        printf("\nnot has 9 divisors");
    }
    
}