#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter the string :");
    gets(str);
    int n,i,count=1;
    n=strlen(str);
    printf("\n%d",n);
    for(i=0;i<n;i++)
    {
        if(str[i]!=" " && str[i+1]==" ")
        {
            count++;
        }
    }
    printf("\n%d",count);
}