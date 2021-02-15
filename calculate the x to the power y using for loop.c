#include<stdio.h>
void main()
{
    int x,y,mult=1,i;
    printf("enter the value of x and its power y:");
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
        mult=mult*x;
    }
    printf("result=%d",mult);
}