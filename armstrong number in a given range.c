#include<stdio.h>
void main()
{
    int l,r,i,temp,num,sum=0,n;
    printf("enter the range:");
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        temp=num=i;
        sum=0;
        while(num!=0)
        {
            n=num%10;
            sum=sum+(n*n*n);
            num=num/10;
        }
        if(sum==temp)
        {
            printf("%d\t",temp);
        }
    }
}