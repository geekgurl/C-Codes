#include<stdio.h>
void main()
{
    float F,c;
    printf("enter temperature in celcius:");
    scanf("%f",&c);
    F=(9.0/5)*c+32;
    printf("the temperature in farenheit is %f",F);
}