#include<stdio.h>
void main()
{
    float p,r,t,si;
    printf("enter values of p,r and t:");
    scanf("%f %f %f",&p,&r,&t);
    si=p*r*t/100.0;
    printf("the simple interest is %f",si);
}