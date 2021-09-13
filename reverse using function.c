#include<stdio.h>
void input(int[],int);
void reverse(int[],int);
void output(int[],int);
int main()
{
    int n,a[20];
    printf("enter the array size :");
    scanf("%d",&n);
    input(a,n);
    reverse(a,n);
    printf("\n");
    output(a,n);
    return 0;
}
void input(int a[20],int n)
{
    int i;
    printf("enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void reverse(int a[20],int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
void output(int a[20],int n)
{
    int i;
    printf("output of the array :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
