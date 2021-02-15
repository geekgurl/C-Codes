#include<stdio.h>
void main()
{
  int n,a,i;
  int arr[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("\nduplicate number to check:");
  scanf("%d",&a);
  printf("the elements of array are");
  for(i=0;i<n;i++)
  {
      printf("%d",arr[i]);
  }
}