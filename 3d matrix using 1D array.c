#include<stdio.h>
void main()
{
    int i,n,a[10],r=0,j;
    printf("ente rthe limit of array :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(i%3==0)
        {
            printf("\n");
            printf("%d",a[i]);
            
        }
        else
        {
            printf("%d",a[i]);
        }
    }
}// 