#include<stdio.h>
#include<string.h>
void main()
{
    int i,n;
    char s[50],d;
    printf("enter the string separating with delimeter :");
    fgets(s,50,stdin);
    scanf("%c",d);
    n=strlen(s);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        if(s[i]==d)
        {
            printf(" ");
        }
        else
        {
            printf("%c",s[i]);
        }
    }
   
     
}