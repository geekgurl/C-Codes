#include<stdio.h>
void reverse_of_number(int);
void main()
{
    int n;
    printf("enter the number:");
    scanf("%d",n);
    reverse_of_number(n); 
}
int r,sum=0;
void reverse_of_number(int a)
{
    if(a!=0)
    {
       r=a%10;
       sum=(sum*10)+r;
       reverse_of_number(a/10);
       printf("%d",sum);
    }
    else
    {
        printf("%d",sum);
    }
}