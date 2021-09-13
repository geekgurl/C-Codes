#include<stdio.h>
void main()
{
    int i,n,min=0,a[10],j,temp;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("ente rth elements of array in binaryform :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=0;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}