#include<stdio.h>
void main()
{
    int n,i,m;
    printf("enter  number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%dx%d=%d\n",n,i,m);
    }
}