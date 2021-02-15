#include<stdio.h>
void main()
{
    char ch;
    printf("enter value");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
       {
           printf("upper case");
       }
    else if(ch>=97 && ch<=122)
        {
            printf("lower case");
        }
    else if(ch>=0 && ch<=9)
    {
        printf("number");
    }
    else
    {
        printf("special character");
    }
}
