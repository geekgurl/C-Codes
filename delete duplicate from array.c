#include<stdio.h>
void main()
{
    int n, i,j,k,a[10];
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)    
        {                            
            if(a[i]==a[j])          
            {
                for(k=j;k<n-1;k++)   
                {                     
                    a[k]=a[k+1];
                }
                n--;   
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
