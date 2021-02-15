#include<stdio.h>
void main()
{
    int n,i,j,a,b,r,count=0;
    printf("enter the range:");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)//i=1
    {
        for(j=1;j<=b;j++)//j=3
        {
            r=j*j;
            if(r==i)
            {
                count++;
            }
            
            
        }       
    }
    printf("\n%d",count);
}