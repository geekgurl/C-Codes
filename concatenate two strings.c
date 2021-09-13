#include<stdio.h>
#include<string.h>
void join(char *,char *,int,int);
void main()
{
    int i,l,m,c;
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    l=strlen(str1);
    m=strlen(str2);
    printf("%d %d\n",l,m);
    c=l+m;
    join(str1,str2,l,m);
}
void join(char *res,char *inp,int l,int m)
{
    int i,j,c;
    i=0;
    while(inp[i]!='\0')
    {
        res[l]=inp[i];
        l++;
        i++;
    }
    printf("%d\n",l);
    printf("%d\n",i);
    for(j=0;j<l;j++)
    {
        printf("%c",res[j]);
    }
}