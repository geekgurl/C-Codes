#include<stdio.h>
void main()
{
    int a,b,mult=1;
    printf("enter the element to compute the power :");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        mult=mult*a;
        b--;
    }
    printf("%d",mult);
}