#include<stdio.h>
void main()
{
    float average,a,b,c,d;
    printf("enter the marks:");
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(a<b && a<c && a<d)
    {
        average=(b+c+d)/3;
    }
    else if(b<a && b<c && b<d)
    {
        average=(a+c+d)/3;
    }
    else if(c<a && c<b && c<d)
    {
        average=(a+b+d)/3;  
    }
    else
    {
        average=(a+b+c)/3;
    }
    printf("Average=%f",average);
}