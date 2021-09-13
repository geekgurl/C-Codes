#include<stdio.h>
void merge(int[],int,int[],int);
void main()
{
    int i,n,a[20],b[20],j,m;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the limit of arrar 2: ");
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
    merge(a,n,b,m);  
}
void merge(int a[20], int n,int b[20],int m) // merge kaise ho raha? jo likha hai codee usse
{
    int i,j,k,c[20];
    i=j=k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
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