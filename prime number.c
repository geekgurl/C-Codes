#include<stdio.h>
void main()
{
    int n,i,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            printf("count=%d",count);
        }
    }
   
    if(count==2)
    {
        printf("\nprime number");
    }
    else
    {
        printf("\nnot a prime number");
    }
    
}