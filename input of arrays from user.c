#include<stdio.h>
void main()
{
    int n;
    int arr[50],i;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}