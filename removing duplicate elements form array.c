#include<stdio.h>
int main()
{
    int i,j,n,a[20];
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
                a[j]='@';
                n--;
            }
        }   
    }
    printf("%d",n);
    for(i=0;i<n;i++)
    {
        if(a[i]!='@')
        {
            printf("\n%d",a[i]);
        }
    }
    
}