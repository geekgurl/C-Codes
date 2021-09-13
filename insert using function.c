#include<stdio.h>
int insert(int[],int,int,int);
void main()
{
    int i,j,k,pos,a[20],n;
    printf("enter the limit :");
    scanf("%d",&n);
    printf("enter the position to enter the element :");
    scanf("%d",&pos);
    printf("enter the element to enter in the position :");
    scanf("%d",&k);
    printf("enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n = insert(a,n,pos,k);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n%d\n",strcmp("tanmay","Tanmay"));
    printf("%d",strcmpi("Tanmay","tanmay"));
}
int insert(int a[],int n, int pos,int k)
{
    n=n+1;
    int i;
    for(i=n;i>=pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=k;
    return n;
}