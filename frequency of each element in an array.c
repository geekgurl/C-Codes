#include<stdio.h>
#include<string.h>
int main()
{
    int freq[26]={0};
    int index;
    char str[50];
    char *ptr;
    gets(str);
    ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr>='A' && *ptr<='Z')
        {
            index=*ptr-'A';
            freq[index]=freq[index]+1;
        }
        else if(*ptr>='a' && *ptr<='z')
        {
            index=*ptr-'a';
            freq[index]=freq[index]+1;
        }
        else;
        ptr++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c freq = %d\n",i+65,freq[i]);
    }
}