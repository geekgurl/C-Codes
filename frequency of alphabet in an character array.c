#include<stdio.h>
int main()
{
    int i,n;
    char a[10];
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the elements of  character array :");
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        
        scanf("%c",&a[i]);
        fflush(stdin);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]='*';
        }
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]='$';
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c ",a[i]);
    }
}