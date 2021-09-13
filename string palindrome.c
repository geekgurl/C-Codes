#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    printf("enter the string  :");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    int r=strcmpi(str1,str2);
    if(r==0)
    {
        printf("palindrome");
    }
    else    
    {
        printf("not palindrome");
    }return 0;

}