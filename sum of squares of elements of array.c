#include<stdio.h>
void main()
{
    int n,i,sum=0;
    int arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+(arr[i]*arr[i]);
       
    }
     printf("sum=%d",sum);
}