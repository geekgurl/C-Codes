#include<stdio.h>
void main()
{
    int n,i;
    int a[10];
    int b[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            printf("\nsame array");
        }
        else
        {
            printf("\nnot same array");
        }
        
    }
}