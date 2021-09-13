#include<stdio.h>
void main()
{
    int i,smallest,second_largest,largest,n,a[10];
    printf("enter the number of inputs:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }   
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("%d",smallest);
    largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("\n%d",largest);
    second_largest=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]<largest && a[i]>smallest)
        {
            second_largest=a[i];
        }
    }
    printf("\n%d",second_largest);



}