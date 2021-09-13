#include<stdio.h>
int prime_number(int a,int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if (a % i == 0)
        {
            return 0;
        }
        else
        {
            return prime_number(a, i - 1);
        }       
    }
}
void main()
{
    int n,m,result;
    printf("enter the number");
    scanf("%d",&n);
    result=prime_number(n,n-1); 
    result==1?printf("prime"):printf("Not prime");
}
