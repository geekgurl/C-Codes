#include<stdio.h>
#include<string.h>
void main()
{
    int i=0,l;
    char s[20];
    fgets(s,20,stdin);
    while(s[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
}