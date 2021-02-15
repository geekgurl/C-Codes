#include<stdio.h>
void main()
{
    int year;
    printf("enter year :");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("the year is leap year");
    }
    else if(year%100==0)
    {
        printf("non leap year");
    
        
    } 
    else if(year%4==0)
    {
       printf("leap year");
    }
    else
    {
        printf("non leap year");
    }
    
   

    
}