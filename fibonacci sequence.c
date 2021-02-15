#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n,i;
  //gfgf
  scanf("%d",&n);
   printf("%d\t",a);
   printf("%d\t",b);
    for(i=2;i<n;i++)
    {
        c=a+b;  
        printf("%d\t",c);
        a=b;
        b=c;
    }
    
}
// 
// 0 1 1 2 3 5 8 13