#include<stdio.h>
void main()
{
    int a,b,c,count=0;
    printf("enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    while(a!=0 && b!=0 && c!=0)
    {
        a--;
        b--;
        c--;
        count++;
    }
    printf("least value=%d",count);
}