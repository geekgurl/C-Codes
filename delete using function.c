#include<stdio.h>
int delete(int[],int,int);
void main()
{
    int i,j,k,pos,a[20],n;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the position to enter the element :");
    scanf("%d",&pos);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    delete(a,n,pos);
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
}
int delete(int a[],int n,int pos)
{
    int i;
    n=n-1;
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    return n;
}