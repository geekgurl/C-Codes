#include<stdio.h>
void main()
{
    int i,j,a[200],n,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)   
    {
        flag=0;
        
        for(j=0;j<n;j++)     
        {
            if(a[i]==a[j] && i!=j)   
            {
                break;
            }
            else{
                flag++;
            }
        }
        if(flag==n)
        {
            printf("%d",a[i]);
            break;
        }
    }
}