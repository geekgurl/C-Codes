#include<stdio.h>
void main()
{
    int n,i,a;
    int arr[10];
    printf("enter numbers to be inserted in array:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf(" the elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nthe number to check from array:");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            printf("\ntrue");
        }
    } 
}
