#include<stdio.h>
void rev(int *,int);
void dis(int *,int);
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],*p;
    printf("enter the elements if array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    rev(a,n);
    dis(a,n);
}
void rev(int *p,int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp=*(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=temp;
    }
}
void dis(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*(p+i));
    }
}