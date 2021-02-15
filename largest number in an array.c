#include<stdio.h>
void main()
{
    int n,i,large;
    int a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];    
    for(i=1;i<n;i++)
    {
       if(a[i]>large)
       {
           large=a[i];
       }       
    }
    printf("%d",large);   
}