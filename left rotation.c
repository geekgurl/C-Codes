#include<stdio.h>
void main()
{
    int i,n,a[50],d;
    scanf("%d",&n);
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int j=0;j<d;j++)
    {
        for(i=0;i<n-1;i++)
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}