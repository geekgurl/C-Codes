#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("a is smallest");
    }
    else if(b<a && b<c)
    {
        printf("b is smallest");
    }
    else
    {
        printf("c is smallest");
    }
    
}