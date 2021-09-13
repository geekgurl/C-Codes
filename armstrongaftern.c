#include<stdio.h>
void main()
{ 
    int l,r,i,temp,num,sum=0,n;
    printf("enter the range:");
    scanf("%d",&n);
    num=n;
    num++;
    while(num)
    {
        int temp=num;
        sum=0;
        while(temp!=0)
        {
            n=temp%10;
            sum=sum+(n*n*n);
            temp=temp/10;
        }
        if(sum==num)
        {
            printf("%d\t",num);
            break;
        }
        num++;
    }
}