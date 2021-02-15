#include<stdio.h>
void main()
{
    int n,k,a,count=0;
    printf("enter value");
    scanf("%d %d",&n,&k);
    for(a=1;a<=n;a++)
    {
        if(k%a==0)
        {
            count++;

        }
    }
    printf("count number is %d",count);
}
