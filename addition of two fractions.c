#include<stdio.h>
void main()
{
    int N,D,n1,n2,d1,d2,i,r,a;
    printf("enter n1,d1 & n2,d2:");
    scanf("%d %d %d %d",&n1,&d1,&n2,&d2);
    N=(n1*d2)+(n2*d1);
    D=d1*d2;
    if(N<D)
    {
       r=N; 
    }
    else
    {
        r=D;
    }
    for(i=1;i<=r;i++)
    {
        if(N%i==0 && D%i==0)
        {
           a=i;
        }   
    }   
    
    printf("\nN/D=%d/%d",N/a,D/a);
}

