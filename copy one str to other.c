#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char s1[20],s2[20];
    fgets(s1,20,stdin);
    j=strlen(s1);
    printf("%d",j);
    for(i=0;i<j;i++)
    {
        s2[i]=s1[i];
    }
    s2[i]='\0';
    for(i=0;i<j;i++)
    {
        printf("%c",s2[i]);
    }
}