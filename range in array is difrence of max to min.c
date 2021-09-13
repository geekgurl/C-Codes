#include<stdio.h>
void main()
{
    int i,n,max,min,a[10]={0},range;
    printf("enetr the number of inputs:");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\n%d",max);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\n%d",min);
    range=max-min;
    printf("\n%d",range);
}