#include<stdio.h>
void main()
{
    char s[][50]={"tanmay","abcd"},s1[50];
  
    for(int i=0;i<2;i++)
    {
        gets(s[i]);
    }
    
    for(int i=0;i<2;i++)
    {
        printf("%s",s[i]);
    }
}