#include<stdio.h>
void main()
{
    int i,j,k,n,m,a[10],b[10],c[10],*p,*q,*r;
    printf("enter the limit of array 1 :");
    scanf("%d",&n);
    printf("ente rthe limit of array 2 :");
    scanf("%d",&m);
    p=a;
    q=b;
    r=c;
    printf("enter the elements of array 1 :");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("enter the elements of array 2 :");
    for(j=0;j<m;j++)
    {
        scanf("%d",(q+j));
    }
    i=j=k=0;
    while(i<n && j<m)
    {
        if(*(p+i)<*(q+j))
        {
            *(r+k)=*(p+i);
            i++;
        }
        else
        {
            *(r+k)=*(q+j);
            j++;
        }
        k++;
    }
    if(i<n)
    {
        for(;i<n;i++)
        {
            *(r+k)=*(p+i);
            k++;
        }
    }
    else
    {
        for(;j<m;j++)
        {
            *(r+k)=*(q+j);
            k++;
        }
    }
    for(k=0;k<m+n;k++)
    {
        printf("%d ",*(r+k));
    }
    

}