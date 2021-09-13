#include<stdio.h>
void main()
{
    int i,j,n,a[20],k=0,count=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)          //i=0 j=0  a[0]=2 -8 9 4 5 -6 5 8 
    {
        for(j=0;j<n-1;j++) 
        {
            if(a[j]>0)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("New Array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}