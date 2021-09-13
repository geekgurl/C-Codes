#include<stdio.h>
void main()
{
    int i,n;
    char a[10],k;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the alphabet to search :");
    fflush(stdin);
    scanf("%c",&k);
    printf("enter the alphabet: ");
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
        fflush(stdin);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("position of alphabet is %d",i+1);
        }
    }
}