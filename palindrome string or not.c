#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int i,n,flag=0;
    gets(str);
    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("%s is not palindrome",str);
    }
    else
    {
        printf("%s is palindrome",str);
    }
    
}