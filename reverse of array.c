#include<stdio.h>
void main()
{
  int n,i;
  int arr[10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      printf("%d\t\n",arr[i]);
  }
  for(i=n-1;i>=0;i--)
  {
    printf("%d\t",arr[i]);
  }
    
}