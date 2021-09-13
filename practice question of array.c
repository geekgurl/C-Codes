#include<stdio.h>
void main()
{
    int i=0,a[20],n,b[20],c[20],m,j=0;
    printf("enter the limit of array 1 :");
    scanf("%d",&n);
    printf("enter the limit of array 2");
    scanf("%d",&m);
    printf("enter the elements of array 1:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of array 2:");
    for(int j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    int k=i=j=0;
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
    for(k=0;k<m+n;k++)
    {
        printf("%d\t",c[k]);
    }   
    
    
    
}