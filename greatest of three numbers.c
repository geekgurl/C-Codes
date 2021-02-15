#include<stdio.h>
void main()
{
    int n,a,b;
    printf("enter number");
    scanf("%d %d %d",&n,&a,&b);
   if(n>a && n>b)
   {
       printf("greatest number is %d",n);
   }
   else if(a>n && a>b)
   {
       printf("greatest number is %d",a);
   }
   else
   {
       printf("greatest number is %d",b);
   }

}
