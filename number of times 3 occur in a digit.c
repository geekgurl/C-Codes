#include<stdio.h>
void main()
{
    int a,b,i,j,r,count=0,n;
    printf("enter the range");
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++)
    {
        n=i;
        while(n!=0)
        {
            r=n%10;
            if(r==3)
            {
                count++;
            }
            n=n/10;
        }
       
    }
    printf("%d",count);

}