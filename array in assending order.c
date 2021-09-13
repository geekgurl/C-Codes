#include<stdio.h>
void main()
{
    int i,n,a[11],max;
    printf("enter the array in assending order: ");
    for(i=0;i<11;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<11;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("%d",max);
}