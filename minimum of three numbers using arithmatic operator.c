#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the elements");
    scanf("%d %d %d",&a,&b,&c);
    if(a<(b+c)/2)
    {
        printf("a is smallest");
    }
    else if(b<(a+c)/2)
    {
        printf("b is smallest");
    }
    else
    {
        printf("c is smallest");
    }
    
}