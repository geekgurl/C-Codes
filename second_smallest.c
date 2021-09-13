#include<stdio.h>
void main()
{
    int n,smallest,second_smallest,j;
    printf("Enter number of elements");
    scanf("%d",&n);
    int a[20],i;
    for(i=0;i<n;i++) // 6 3 2 4 5 1 7 8
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
    printf("%d\t",smallest);
    second_smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>smallest)
        {
            second_smallest=a[i];
        }
    }
    for(i=1;i<n;i++) 
    {
        if(a[i]<second_smallest && a[i]>smallest)
        {
            second_smallest=a[i];
        }
    }
    printf("%d\n",second_smallest);
}