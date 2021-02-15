#include<stdio.h>
void main()
{
    char ch;
    printf("enter value");
    scanf("%c",&ch);
    if(ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("vowel");

    }
    else
    {
        printf("consonant");
    }

}
