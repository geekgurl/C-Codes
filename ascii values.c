#include<stdio.h>
void main()
{
    int arr[7];
    printf("enter value:");
    for(i=0;i<7;i++);
    {
        scanf("%d",&arr[i]);
        large=arr[0];
        for(i=1;i<7;i++)
        {
            if(arr[i]>large)
            {
                printf("largest value is : %d"large);
            }
        }
    }
}