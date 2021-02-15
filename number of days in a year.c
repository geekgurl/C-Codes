#include<stdio.h>
void main()
{
    int n,y;
    printf("enter the month:");
    scanf("%d",&n);
    printf("enter the year:");
    scanf("%d",&y);
    if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12) // its better to realize!
    {
        printf("number of days are 31");
    }
    else if(n==4 || n==6 || n==9 || n==11)
    {
        printf("number of days are 30");
    }
    else
    {
        if(y%400==0)
        {
            printf("nummber of days are 29");
        }
        else if(y%100==0)
        {
            printf("nummber of days are 28");
        }
        else if(y%4==0)
        {
            printf("number os days are 29");
        }
        else
        {
            printf("number of days are 28");
        }
    
    }
    
}