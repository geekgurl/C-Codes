#include<stdio.h>
void main()
{
    int p;
    printf("enter the percentage");
    scanf("%d",&p);
    if(p>80)
    {
        printf("Grade A");
    }
    else if(p<=80 && p>=61)
    {
        printf("Grade B");
    }
    else if(p<=60 && p>=51)
    {
        printf("Grade C");
    }
    else if(p<=50 && p>=41)
    {
        printf("Grade D");
    }
    else if(p<=40 && p>=35)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    
}