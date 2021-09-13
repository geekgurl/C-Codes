#include<stdio.h>
void main()
{
    int i=0,a[20],n,b[20],c[20],m,j=0,*p,t;
    printf("enter the limit of array 1 :");
    scanf("%d",&n);
    printf("enter the elements of array 1:");
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    p=a;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}    
