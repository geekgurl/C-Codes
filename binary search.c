#include<stdio.h>
void main()
{
    int low,high,mid,n,a[20],i,k,found;
    printf("enter the size of array :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("enter the element you wanted to search :");
    scanf("%d",&k);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(k<a[mid])
        {
            high=mid-1;
        }
        else if(k>a[mid])
        {
            low=mid+1;
        }
        else if(k==a[mid])
        {
            printf("found element %d",mid);
            found=1;
            break;
        }
        else{
            printf("not found the give element ");
        }
    }
}