#include<stdio.h>// (#)preprocessor director gcd=greatest common divisor
void main()
{
  int a,b,i,hcd=1,n;
  printf("enter values:");
  scanf("%d %d",&a,&b);
  
  if(a<b)
  {
    n=a;
  }
  else
  {
    n=b;
  }

       for(i=1;i<=n;i++)
      {
         if(a%i==0 && b%i==0)
        {
            hcd=i;
          
        }
     
      }
     
     
  printf("the hcf of numbers is %d\n",hcd);
  
  
}