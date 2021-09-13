#include<stdio.h>
void main()
{
    int i,a[11],count=0,n,m;
    printf("enter the number of inputs:");
    scanf("%d",&n);
    printf("enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to check its occurence:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
}