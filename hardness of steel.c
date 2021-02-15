#include<stdio.h>
void main()
{
    float h,c,ts;
    printf("the value of h,c,ts:");
    scanf("%f%f%f",&h,&c,&ts);
    if(h>50 && c<0.7 && ts>5600)
    {
        printf("grade is 10");
    }
    else if(h>50 && c<0.7)
    {
        printf("grade is 9");
    }
    else if(c<0.7 && ts>5600)
    {
        printf("grade is 8");
    }
    else if(h>50 && ts>5600)
    {
        printf("grade is 7");
    }
    else if("h>50 || c<0.7 || ts>5600")
    {
        printf("grade is 6");
    }
    else
    {
        printf("grade  is 5");
    }
    
}