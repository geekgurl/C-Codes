#include<stdio.h>
void fact(int);
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    fact(n);
} 
void fact(int a)
{
    int r,i;
    for(i=1;i<=a;i++)
    {
        r=a%i;
    }
    if(r==0)
    {
        printf("factors of numbers are %d",i);
    }
    
}