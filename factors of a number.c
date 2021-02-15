#include<stdio.h>
void main()
{
    int a,i,r;
    printf("enter number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            r=a/i;
            printf("factors of number is %d\n",r); 
        }
       
    }
}