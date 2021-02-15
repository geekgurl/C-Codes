#include<stdio.h>
void main()
{
    int n,l,r,i,temp,num,sum=0;
    printf("enter the range : ");
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        temp=num=i;
        sum=0;
        while(num!=0)
        {
            n=num%10;
            sum=sum+n;
            num=num/10;
        }
        if(temp%sum==0)
        {
            printf("%d ",temp);
        }
    }
}