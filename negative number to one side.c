#include<stdio.h>
void main()
{
    int i,j,n,a[20],c[20],k=0,count=0,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            c[k]=a[i];
            k++;
        }
    }
    
    printf("New Array : \n");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}