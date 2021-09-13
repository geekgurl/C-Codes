#include<stdio.h>
void main()
{
    int t,n,r,a[50];
    printf("enter the no of test cases :");
    scanf("%d",&t);
    for(int k=0;k<t;k++)
    {
        printf("\nenter the no of students :");
        scanf("%d",&n);
        printf("enter the total budget for party :");
        scanf("%d",&r);
        printf("enter the amount spend by each student :");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d  ",a[i]);
        }
        int sum=0;
        int i=0;
        while(sum<100)
        {
            sum=sum+a[i];
            i++;
        }
        printf("\n%d",i-1);
    }
}