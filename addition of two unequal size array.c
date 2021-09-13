#include<stdio.h>
int main()
{
    int i=0,n,j=0,a[10],b[10],m,c[10],k=0,r;
    printf("enter the limit of array 1 :");
    scanf("%d",&n);
    printf("enter the limit of array 2 :");
    scanf("%d",&m);
    printf("enter the elements of array 1 :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ente rthe elements of array 2 :");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    i=j=k=0;
    while(i<n && j<m)
    {
        c[k]=a[i]+b[j];
        i++;
        j++;
        k++;
    }
    if(i<n)
    {
        for(;i<n;i++)
        {
            c[k]=a[i];
            k++;
        }
    }
    else
    {
        for(;j<m;j++)
        {
            c[k]=b[j];
            k++;
        }
    }
    r=(m>n)?m:n;
    for(k=0;k<r;k++)
    {
        printf("%d ",c[k]);
    }

}