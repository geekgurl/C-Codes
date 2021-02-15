#include<stdio.h>
void main()
{
    int a,r,sum=0;
    printf("enter number");
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        sum=sum+(r*r*r);
        a=a/10;
       
    } 
        printf("Armstrong number of given number is %d\n",sum);

     if(sum=a)
        {
            printf("the given number is armstrong\n");
        }
    else 
        {
            printf("not armtrong number");
        }
    
    
}