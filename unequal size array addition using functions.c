#include<stdio.h>
void add_array(int[],int,int[],int);
void main()
{
    int i,j,m,n,a[10],b[10];
    printf("enter the limit of array 1 : ");
    scanf("%d",&n);
    printf("enter the limit of array 2 :");
    scanf("%d",&m);
    printf("enter the elements of array 1 :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of array 2 :");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    add_array(a,n,b,m);
   
}
void add_array(int a[10],int n,int b[10],int m)
{
    int i,j,k,c[20],sum=0;
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
    for(k=0;k<(m+n);k++)
    {
        printf("%d",c[k]);
    }
}
