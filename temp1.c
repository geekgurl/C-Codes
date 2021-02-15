#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Hello");

        if(i==5)
        {
            i=20;
        }
    }
}