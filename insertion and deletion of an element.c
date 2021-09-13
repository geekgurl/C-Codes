#include<stdio.h>
int main()
{
    int i,pos,ele,a[10],n;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the element of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //////////////insertion
    printf("enter the position :");
    scanf("%d",&pos);
    printf("enter the element :");
    scanf("%d",&ele);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    n=n+1; // 6
    a[pos-1]=ele;
    printf("\nn=%d",n);
   
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    //////////////////////
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
        

    
    
}