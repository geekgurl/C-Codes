#include<stdio.h>
int main()
{
    int n,r,sum=0,k=1,rem,sum1=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
       // k=k*10;
        n=n/10;
    }
    printf("%d",sum);
    while(sum!=0)
    {
        rem=sum%10;
       if(rem<9)
        {
            for(int i=1;i<=1;i++)
            {
                rem=9;
            }
        }
        
        sum1=sum1*10+rem;
        sum=sum/10;
    }
    printf("\nsum1=%d",sum1);
    
    return 0;
}