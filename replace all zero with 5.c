#include<stdio.h>
void main()
{
    int i,a[10],n,m;
    printf("enetr the number of inputs:");
    scanf("%d",&n);
    printf("enter the elemeets of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to replace with zero :");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=m;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}