#include<stdio.h>
void main()
{
    int i,j,k,n,a[20],temp,*p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    scanf("%d",&k);
    for(i=k;i<n;i++)             // i=2 j=2   j<3 a[2]=2  j=3 a[3]>a[4]
    {
        for(j=k;j<n-1;j++)
        {
            if(*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

}