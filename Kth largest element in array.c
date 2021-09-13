#include<stdio.h>
void main()
{
    int i,j,k,a[20],n,l,h;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the kth element :");
    scanf("%d",&k);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    l=a[n-k];
    h=a[k];
    printf("\nlargest=%d",l);
    printf("\nsmallest=%d",h);

}