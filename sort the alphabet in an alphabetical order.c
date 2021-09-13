#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j,temp;
    char str[10];
    printf("enter the character array :");
    gets(str);
    n=strlen(str);
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
                
            
        }
    }
    printf("%s",str);
}