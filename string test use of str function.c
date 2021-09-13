#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20];
    printf("enter the string elements :");
    gets(str1);
    int length;
    length=strlen(str1);
    printf("\n%d",length);
    strcpy(str2,str1);
    printf("\n%s",str2);

}