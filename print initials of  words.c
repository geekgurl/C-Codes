#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i,l;
    fgets(s,20,stdin);
    l=strlen(s);
    printf("%c",s[0]);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            printf("%c",s[i+1]);
        }
    }
}