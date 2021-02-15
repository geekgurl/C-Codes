#include<stdio.h>
int SI();
int main()
{
    int res;
    res=SI();
    printf("%d",res);
    
}
int SI()
{
    int p,r,t;
    printf("enter the value of p,r,t");
    scanf("%d %d %d",&p,&r,&t);
    
    int simple;
    simple=(p*r*t)/100;
    return simple;
}